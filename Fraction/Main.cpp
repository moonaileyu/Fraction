#include <iostream>
#include "Fraction.h"
using namespace std;

int main()
{
    Fraction* a = new Fraction;
    Fraction* b = new Fraction;

    a->Init(2, 3);
    b->Init(3, 4);

    cout << "a = ";
    a->Print();

    cout << "b = ";
    b->Print();

    Fraction sum = a->Add(b);
    Fraction sub = a->Sub(b);
    Fraction mul = a->Mul(b);
    Fraction div = a->Div(b);

    cout << "a + b = ";
    sum.Print();

    cout << "a - b = ";
    sub.Print();

    cout << "a * b = ";
    mul.Print();

    cout << "a / b = ";
    div.Print();

    delete a;
    delete b;

    return 0;
}