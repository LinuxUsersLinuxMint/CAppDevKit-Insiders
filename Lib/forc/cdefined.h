#ifndef _C_DEFINED_H_
#define _C_DEFINED_H_

#include "../CAppDevKitLib/appcustomvar.h"
#include "../customdefine.h"

#define afunc       v
#define appfunc     app_func

appfunc print(char *str)
{
    printf("%s", str);
}

appfunc println(char *str)
{
    printf("%s", str);
}

appfunc p(char *str)
{
    printf("%s", str);
}

st cdefine
{
    #define clib_define_name    "cdefined"
    #define clib_file_ext       ".h"
    #define clib_ver            "2.1.1"
} cdef;

st cdefine cdef;

#endif