#ifndef _CPP_FUNC_HPP_
#define _CPP_FUNC_HPP_

#include "../CAppDevKitLib/cppappcustomvar.hpp"
#include "../CAppDevKitLib/appvoid.h"
#include <string>
uns

ns SwapVar
{
    tmp <ty T>
    T swap_var(T swap_var_one, T swap_var_two)
    {
        T swap;
        swap = swap_var_one;
        swap_var_one = swap_var_two;
        swap_var_two = swap;
        r 0;
    }
}

ns AddFunc
{
    tmp <ty A>
    A add_var(A addv_one, A addv_two)
    {
        r addv_one + addv_two;
    }
    tmp <ty S>
    S sub_var(S subv_one, S subv_two)
    {
        r subv_one - subv_two;
    }
    tmp <ty M>
    M mul_var(M mulv_one, M mulv_two)
    {
        r mulv_one * mulv_two;
    }
    tmp <ty D>
    D div_var(D divv_one, D divv_two)
    {
        r divv_one / divv_two;
    }
    tmp <ty P>
    P perc_var(P percv_one, P percv_two)
    {
        r percv_one % percv_two;
    }
}

ns MoveVar
{
    tmp <ty MV>
    MV move_var(MV movev_two, MV movev_one)
    {
        r movev_two = movev_one;
    }
}

#endif