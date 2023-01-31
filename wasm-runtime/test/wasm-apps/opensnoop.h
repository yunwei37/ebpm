// auto generated. do not edit.
/* SPDX-License-Identifier: MIT
 *
 * Copyright (c) 2023, eunomia-bpf
 * All rights reserved.
 */
#ifndef EWASM_JSON_INCLUDE_H_
#define EWASM_JSON_INCLUDE_H_

#define TASK_COMM_LEN 16
#define NAME_MAX 255
#define INVALID_UID ((uid_t)-1)

// used for export event
struct event {
    /* user terminology for pid: */
    unsigned long long ts;
    int pid;
    int uid;
    int ret;
    int flags;
    char comm[TASK_COMM_LEN];
    char fname[NAME_MAX];
};

char *program_data =
    "{\"bpf_object\":\"eJztmm9MHMcVwGePwxwEY+"
    "xAc3Fie4kTcufgAwOOSbBdYheXqDRCTiJd2qDlOBY4BbjN/"
    "YkhVloqJRKKWskfWpUPUUqSpkJRKjmVKvOhDaiKWqpGKZWiCkVRS5WqpYoV0UpV+ZDafW/"
    "m7e3cuwOuiquqlU/affubefPem5k3u3tz9/Xu3nM+wxDuxxD/EB55n4Gj3nUXnetBc/"
    "FzquwFOGrgiFd9eh05yIzE9ilZ7/Mr3qt40afkBZAmyP6GBvHvtB8Rqt0Fkv3G7ap9BWv/"
    "tJJB8HMdPm75gYbyXPx7NL1CuzWy/ArFdXH/hrQxFaslXicOSo5T/eKrSr8C/"
    "H4KfhdfIy4TYh2Y9/OK6p6MB4fmCpV/"
    "h+TN8Q4Su+NtSv5Pj7cXx+"
    "Z1PR43jov710iuklwhuUxyieQCycsk50nOkZwleYnkDMlpkpMkHZKjJAdIRkn2kewh2UWyg2QL"
    "yRBJk2SQZC3JAElBcvMa9Z/"
    "kOsk1kqvX3PFU+fn+"
    "NT4v718rnAfUx6JFyqP6ipCUU6NqfXH9pykf6w01gYvfUDxiqPz5BUnb2C/"
    "zz43Hza941Vouzj2S/"
    "6jifIXihPYbEOcViLeW9FBOpVW9rocOUO866aUE5nVA1sf3X5V24y+qcVr8PrWDsFfB/"
    "mJMcdCX379gWf66uQLLJmQo+7eXOJ5l4mY+38xnivP/"
    "NJ9v1OeLfb1Sfu9jQwSpbLJcHd8K5NR8GAOFJmfKzKEMTz5D/"
    "KRTnq+Xs7HLu85rI0KeDrpUT1YRqITTAbqugtPhLexWw6lF2fPj3J6AYzdVniI/"
    "XZp+jXddhTlzluxi7AHqF/jwmyB7vH6LL1Pf0NYTcGCKT8PRD8ctcCzBEVeqNbVaO/"
    "R5qyjed79X6A+SP3oFEQm67hIqF/"
    "eRv+"
    "fIRx3zcRucnqfYsc3LcLhziml2B9l6XahxRVtvwHGQAnqL2gYoDpoHOYb7hVo3P6VrtPsr1UzO"
    "xa+VquEjvd8R05iKq8QBFYPx13zOG5s7VRyC58se4Y2XbAzTjP5wceHtvcyQZdWHtqj/"
    "bpmqb9DG7G44zfhVv4PbjNkrfnU9rY3ZUhE/"
    "mKOv+5Wfe7aoj1ao+nu9OKqOeNeVqPs3df+sCav24p+"
    "MKwP57Npp1uzgmqhTeoFjcLpdXbtz4j9ENiL5NvLGGo/7SK8tX893v+b3hOa3A05tAbk+/"
    "HivewCuH6BKN2e64DgZUNcDQo0vXk8Lb83OoR7oPCjUWKOPTiwDm93Ul2L548Zeu0U5zkOU+"
    "nSc+pRSCx9VxElqhCoXVIyynB5VMt/r6Rpz5bmAtCt17qNy9NOkXR/"
    "VrlvpGv2+oPlt13REYiIjLOuh8+"
    "cfesJ69OGvdFuPPdHXbVki29YK5XjOTqQTIxP2kImqsdRI2sqI4YnYuC2Gx2IjaREfjaVEZsqx"
    "xXhs0rInMqmEnRZP2VPimdhY1hbpTCyVQbbSiWdtVagu7WdAOy0yqVjctiRYqdgFKz2VRjN2Ss"
    "BZJIakUwhmKJaJucrgZUo4KdsedzJWPJkFRQc0c7GmR5PgNIcyxrHkxIhXJCmemVQWnST0zkLX"
    "8djYWNrygrCSjj2hKTW7Os1MpXk0OW43T2UnLtiJZjs7kRxPxI4OOsPN9mRs3Bmz080ZO51JN0"
    "cizVCaSSbBBDZMTySTjncVgcpIBvoViePkmKWEF0pnUtk46RYbySMm9DQsKrP3t5uJIfOUCU6s"
    "ERuGLptKoTYMnpUZSQyFwp2g1dZqOlItMQSYGDZDWGfBREIbs7HR1LHhlMSwaoeXsqF5+"
    "rTZ1krNnbzWTl5jR7ZFLUgNqMlCFNmcRjhsXhSVlVlpNQQewjx01HUjl2ayeeaBlAkaI5XBUoD"
    "Fi891ipYHWx9sAQUsisjMRlfx5EQ6IxPHPBKG0Tt6Guu/2tKvGhzLNcBFgA1ghjS9Y/"
    "0YDsY6HnOsrAPJCzMzZo+"
    "HGuWCaDIboeNwRu0mswWjT9mZbGrCbOksKSdjmRKyEpRKTaJYpuQ0Km2ojtFQte4wVK39ncXvA"
    "ZOJjIAx2W40QGWHBZrT2GEcXL1tBwGU3DEgNalAZ5VO2vLZdpXFHNLABBlLJp/"
    "KOoUJEqYF1BBzwjiYMkmgnRw9uHSXJwykNRxLjMGNDRYY6pw+"
    "BUklKmVkkZ3CyS1WpZ4tqq4vNF4XT45D4Ko1XjeZeIdPDoe8orDbzkklB20rZcdgrach+"
    "WAk3aYypVhbWRZuMmPO0dPqOhenm1CyCq9zNWqU1ABJn3ZqmCYzmc042UwIRhCGWD2Cmswzfee"
    "sc9bZx8+f737kMets3+NNIrd4h2BWii1ebclSskB6oN1wZykpu9361XRKTNsdVq+"
    "XuN7NV2h3ceHdNMUgPJqEdQbPWl6J3ofPdj/yaLd6agt4bkMTgROb/"
    "0xVD1bLoiegNZQdH5+icJxMSkQG02kRgXGFcyopn+ljiTg8/"
    "Gx8HcHvhya9n3yBDj+84PVUqO8c+K4UMrz3Q9R9u8zju+D4pd/"
    "jRji+VuFxiN7X0MYdVPYluH4ZFTaUfeRP4LhlU+ki18HL2S6/"
    "+u6KfBh5QX0fdHkfcIfG9QvqnRG5V+"
    "4LGKKPtY8SDyIvCeFovBd4UuO6JfXe6sZTDfFcYu1niWfQ37J6n3V5F/"
    "Ay8Q+Aa94VYoX4PeAKgFWtvhLq11n9JvFfML46NRHIVTAHB2FTIaBxDXAtcSdw/"
    "Z2G3JdxuQY4ZOTb6yLuh/oy0xADxN8E9oEyzrU+bx/hG3eHkT9vYCRv3no/47z13OB56/"
    "0vz9uT3rwdh7VycMCbN+SaAW/"
    "ehoHrh7x5Q64ZYvP2JJu3UTZvjiHX5J3avH0sv3z4cvP0AGx47JkxcColPwpc/"
    "W3PLvIu4D5i9xMlfhbqK14yxCTxa6g/Z4hp4reAd88bYob4Z1j/"
    "piHmNN4HvEy8BlzzE0OsaBwGXtW4GniNeA9sItQsGWJd42rgDeITwAffMeSXPJd9wLXESeCHwH"
    "lQ4wbgkMY+4A7iK8B178L4aFwD3EP8G/QPwUd9+f0ZIP4I7X0I/fflj+c88R1wz/"
    "RdNcQS8eeRAz55L9Xn8VXcLwjenMf/"
    "qXk0fblnoNxGBol7ev4y1baW+Dgx3nN1veNMb4A2y9znLs4V7nf9kDZo3ecvL9/"
    "pUybKCsrO+FRNlJV/YqjyASO/vJH0Z5n+p6S/IYr5LQywU9opL/D7Z0OVc7+HSJ/7/TvpF/"
    "dbUVBWJe1UyPnTP+1Uvsz8Bql81lfMfmVhmdSrLLB/lMq5/"
    "b1Uzu3jet6nzZdD7fA5uxd2rd39VFfeQ+WCle+n8gArr5Pl1Tl9k+SLAv2WF/"
    "jdJePxxnOF4v2Roey7ltzufUD2Xbvu3uxJab+"
    "ywM7vpZ3dBfFflXa8nf8As2dQX6Ia4x7frMa4h9xleHzbDWgfZTyjMY75qM9jfL+"
    "a993Y9rXl3jjhnnZIY6xv1xjb9xKXUf+iGmP/hzTG/joaYzwzmj38DULfI8WYTmqM+/"
    "+9GmNWPqkxbpo6rP0040uM5xhfZrzEeIXxGuMNxm7iulzL2GTcwriLcR/"
    "jAcYO42nGlxjPMb7MeInxCuM1xhuMhY/"
    "1n3FIY5zfDsY9jKOMRxlPMp5hPMt4nvEC42XGq4zXGW8yDpTlc5BxiHEH4x7GUcajjCcZzzCeZ"
    "TzPeIHxMuM1jXH9bTB2b7Au1zI2Gbcw7mLcx3iAscN4mvElxnOMLzNeYrzCeI3xBmNRzvrP2GT"
    "cwriLcR/"
    "jAcYO42nGlxjPa4z3ywXGy4xXGa8z3mQc2JXPQcYhxh2MexhHGY8ynmQ8w3iW8TzjBcbLjFcZr"
    "zPeZByoYP1nHGLcwbiHcZRxRmO8fz7P+CWNMbQ3Gb+jMebDh8z+"
    "gbsONx46aN7dcO89An7dmszA5p89Fjnz2LkIgvqNUNuD3GKXsrRtVTRdytZqib+"
    "ybGtOV6TfM7Udzq23QUv5TaOkfpT2+2VpfRCRsbFnxq3Y0FAKdnRz+7L6LnAEdpkzsUGQU+"
    "NS0h6uO525beLeM2eOWSdQtChxzLpfkRRt1nEUrUq0We2K2pVmu9JsV3Vtqq5N1bWqOvfX7c/"
    "2edsQRb5lCnEr/cD+MPueY4hCNkTef0jkp0sU//gZTxnbt3eYwwDTyxpCfjvpYuWBu/"
    "Lt4Dtzmdbe/c/Cj0Vx/+772k7+8b88xfz3FPFfXsR/ZIv+mzQpK77t/R/Zov8zRfxXFPE/"
    "LIr73ygvzf+gKO5/uYj/yiL+36P+86/rS6S4m5Xz/PkTxc9zeIXad7ByHv8bRvH2gcri/nj+/"
    "4Fs8va1lcX9cf7AKLSptz9Qk1/O4/ntVvl/WMlpYhx/+Rx17ZPEZ1Ux/y23KXm1Ynv/WF00/"
    "1z/FZ7/vUX8v4T3n97rSS1UFf99Xnz6h8f6c6Mwd/Bj0p/"
    "T1rXv4beKwv2IfwFv2uHD\",\"bpf_object_size\":12960,\"meta\":{\"bpf_skel\":{"
    "\"data_sections\":[{\"name\":\".rodata\",\"variables\":[{\"description\":"
    "\"Process ID to "
    "trace\",\"name\":\"pid_target\",\"type\":\"int\"},{\"description\":"
    "\"Thread ID to "
    "trace\",\"name\":\"tgid_target\",\"type\":\"int\"},{\"description\":"
    "\"User ID to "
    "trace\",\"name\":\"uid_target\",\"type\":\"int\"},{\"cmdarg\":{"
    "\"default\":false,\"long\":\"failed\",\"short\":\"f\"},\"description\":"
    "\"trace only failed "
    "events\",\"name\":\"targ_failed\",\"type\":\"bool\"}]},{\"name\":\".bss\","
    "\"variables\":[{\"name\":\"__eunomia_dummy_event_ptr\",\"type\":\"struct "
    "event *\"}]}],\"doc\":{\"description\":\"Trace open family "
    "syscalls.\"},\"maps\":[{\"ident\":\"start\",\"name\":\"start\"},{"
    "\"ident\":\"events\",\"name\":\"events\"},{\"ident\":\"rodata\","
    "\"mmaped\":true,\"name\":\"opensnoo.rodata\"},{\"ident\":\"bss\","
    "\"mmaped\":true,\"name\":\"opensnoo.bss\"}],\"obj_name\":\"opensnoop_"
    "bpf\",\"progs\":[{\"attach\":\"tracepoint/syscalls/"
    "sys_enter_open\",\"link\":true,\"name\":\"tracepoint__syscalls__sys_enter_"
    "open\"},{\"attach\":\"tracepoint/syscalls/"
    "sys_enter_openat\",\"link\":true,\"name\":\"tracepoint__syscalls__sys_"
    "enter_openat\"},{\"attach\":\"tracepoint/syscalls/"
    "sys_exit_open\",\"link\":true,\"name\":\"tracepoint__syscalls__sys_exit_"
    "open\"},{\"attach\":\"tracepoint/syscalls/"
    "sys_exit_openat\",\"link\":true,\"name\":\"tracepoint__syscalls__sys_exit_"
    "openat\"}]},\"eunomia_version\":\"0.3.0\",\"export_types\":[{\"members\":["
    "{\"name\":\"ts\",\"type\":\"unsigned long "
    "long\"},{\"name\":\"pid\",\"type\":\"int\"},{\"name\":\"uid\",\"type\":"
    "\"int\"},{\"name\":\"ret\",\"type\":\"int\"},{\"name\":\"flags\",\"type\":"
    "\"int\"},{\"name\":\"comm\",\"type\":\"char[16]\"},{\"name\":\"fname\","
    "\"type\":\"char[255]\"}],\"name\":\"event\",\"size\":296,\"type_id\":56}]}"
    "}";

#include "opensnoop-struct-bindgen.h"

#endif
