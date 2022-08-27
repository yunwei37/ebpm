#include <iostream>
#include <thread>

#include "base64.h"
#include "eunomia/eunomia-bpf.hpp"
#include "json.hpp"

extern "C"
{
#include <bpf/libbpf.h>
#include <stdio.h>
#include <stdlib.h>
}

namespace eunomia
{
  // format data
  struct format_info
  {
    const char *print_fmt;
    std::size_t field_offset;
    std::size_t width;
  };
  std::vector<format_info> print_rb_default_format;

  struct print_type_format_map
  {
    const char *format;
    const char *type_str;
    const char *llvm_type_str;
  };

  static print_type_format_map base_type_look_up_table[] = {
    { "%d", "int", "i32" },          { "%lld", "long long", "i64" },
    { "%u", "unsigned int", "i32" }, { "%llu", "unsigned long long", "i64" },
    { "%d", "unsigned char", "i8" }, { "%c", "char", "i8" },
    { "%c", "_Bool", "i8" },
    // Support more types?
  };

  int eunomia_ebpf_program::check_for_meta_types_and_create_export_format(ebpf_export_types_meta_data &types)
  {
    auto fields = types.fields;
    for (std::size_t i = 0; i < fields.size(); ++i)
    {
      auto &field = fields[i];
      std::size_t width = 0;
      // calculate width of a field
      if (i < fields.size() - 1)
      {
        width = fields[i + 1].field_offset - field.field_offset;
      }
      else
      {
        width = types.data_size - field.field_offset;
      }
      // use the byte number instead of the width
      width /= 8;
      bool is_vaild_type = false;
      // use the lookup table to determine format
      for (auto &type : base_type_look_up_table)
      {
        // match basic types first, if not match, try llvm types
        if (field.type == type.type_str || field.llvm_type == type.llvm_type_str)
        {
          print_rb_default_format.push_back({ type.format, field.field_offset, width });
          is_vaild_type = true;
          break;
        }
        else if (field.llvm_type.size() > 0)
        {
          // a simple and naive match for arrays
          if (field.llvm_type.front() == '[' && field.type.size() > 4 && std::strncmp(field.type.c_str(), "char", 4) == 0)
          {
            // maybe a char array: fix this
            print_rb_default_format.push_back({ "%s", field.field_offset, width });
            is_vaild_type = true;
            break;
          }
        }
      }
      if (!is_vaild_type)
      {
        std::cerr << "Unsupported type: " << field.type << " " << field.llvm_type << std::endl;
      }
    }
    if (print_rb_default_format.size() == 0)
    {
      std::cerr << "No available format type!" << std::endl;
      return -1;
    }
    return 0;
  }

  template<typename T>
  static void print_rb_field(const char *data, const format_info &f)
  {
    printf(f.print_fmt, *(T *)(data + f.field_offset / 8));
    printf(" ");
  }

  static const std::map<std::size_t, std::function<void(const char *data, const format_info &f)>> print_func_lookup_map = {
    { 1, print_rb_field<uint8_t> },
    { 2, print_rb_field<uint16_t> },
    { 4, print_rb_field<uint32_t> },
    { 8, print_rb_field<uint64_t> },
  };

  void eunomia_ebpf_program::print_default_export_event_with_time(const char *event) const
  {
    struct tm *tm;
    char ts[32];
    time_t t;

    time(&t);
    tm = localtime(&t);
    strftime(ts, sizeof(ts), "%H:%M:%S", tm);
    printf("%-8s ", ts);
    for (const auto &f : print_rb_default_format)
    {
      auto func = print_func_lookup_map.find(f.width);
      if (func != print_func_lookup_map.end())
      {
        func->second((const char *)event, f);
      }
      else
      {
        // should be an array
        printf("%s ", (char *)(event + f.field_offset / 8));
      }
    }
    printf("\n");
  }

  /// FIXME: output config with lua
  void eunomia_ebpf_program::handler_export_events(const char *event) const
  {
    if (user_export_event_handler)
    {
      user_export_event_handler(event);
      return;
    }
    print_default_export_event_with_time(event);
  }

}  // namespace eunomia
