#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction a, b, sum, sub, mul, div;

    a.Init(2, 3);
    b.Init(3, 4);

    cout << "a = ";
    a.Print();

    cout << "b = ";
    b.Print();


    sum = a.Add(b);
    sub = a.Sub(b);
    mul = a.Mul(b);
    div = a.Div(b);

    cout << "a + b = ";
    sum.Print();

    cout << "a - b = ";
    sub.Print();

    cout << "a * b = ";
    mul.Print();

    cout << "a / b = ";
    div.Print();

    return 0;
}