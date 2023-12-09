#ifndef _C_DEFINED_H_
#define _C_DEFINED_H_

#include "../CAppDevKitLib/appcustomvar.h"

#define afunc    void
#define afunc app_func

afunc print(char *str)
{
    printf("%s", str);
}

afunc println(char *str)
{
    printf("%s", str);
}

afunc p(char *str)
{
    printf("%s", str);
}

st cdefine
{
    #define clib_define_name    "cdefined"
    #define clib_file_ext       ".h"
    #define clib_ver            "2.1"
} cdef;

st cdefine cdef;

#endif