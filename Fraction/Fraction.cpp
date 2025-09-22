#include "Fraction.h"
#include <iostream>
using namespace std;

void Fraction::Init(int _n, int _d)
{
    numerator = _n;
    denominator = (_d == 0) ? 1 : _d;
}

void Fraction::Print()
{
    cout << numerator << " / " << denominator << endl;
}

Fraction Fraction::Add(Fraction other)
{
    Fraction result;
    result.Init(numerator * other.denominator + other.numerator * denominator, denominator * other.denominator);

    return result;
}

Fraction Fraction::Sub(Fraction other)
{
    Fraction result;
    result.Init(numerator * other.denominator - other.numerator * denominator, denominator * other.denominator);

    return result;
}

Fraction Fraction::Mul(Fraction other)
{
    Fraction result;
    result.Init(numerator * other.numerator, denominator * other.denominator);

    return result;
}

Fraction Fraction::Div(Fraction other)
{
    Fraction result;
    result.Init(numerator * other.denominator, denominator * other.numerator);

    return result;
}