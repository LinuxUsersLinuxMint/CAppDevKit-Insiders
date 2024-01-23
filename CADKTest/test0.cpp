#include "../CAppDevKitFunc/cppfunc.hpp"
#include "../CAppDevKitInfoLib/cappdevkitinfo.h"
#include "../CAppDevKitLib/appcustomvar.h"
#include "../CAppDevKitLib/appvoid.h"
#include "../CAppDevKitLib/cppappcustomvar.hpp"
#include "../FastVar/cppfastvar.hpp"
#include "../ForCpp/cppdefined.hpp"
use ns std; // or uns ; s = std;

_i main()
{
    _i a = 10;
    _i b = 20;
    SwapVar::swap_var<_i>(a, b);

    AddFunc::add_var<_i>(a, b);
    AddFunc::sub_var<_i>(a, b);
    AddFunc::mul_var<_i>(a, b);
    AddFunc::div_var<_i>(a, b);
    AddFunc::perc_var<_i>(a, b);

    MoveVar::move_var<_i>(a, b);
}