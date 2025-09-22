#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    void Init(int _n, int _d);
    void Print();

    Fraction Add(Fraction other);
    Fraction Sub(Fraction other);
    Fraction Mul(Fraction other);
    Fraction Div(Fraction other);
};