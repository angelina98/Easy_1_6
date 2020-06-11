#pragma once

template < unsigned forfib > struct fibonachi
{
    static const unsigned value = fibonachi<forfib - 1>::value + fibonachi<forfib - 2>::value;
};

template <> struct fibonachi <0>
{
    static const unsigned  value = 0;
};

template <> struct fibonachi <1>
{
    static const unsigned  value = 1;
};