#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 1.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul(double a, double b)
{
    return (a + 1.5) * (b - 3);
}
