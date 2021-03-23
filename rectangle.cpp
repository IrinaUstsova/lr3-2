//
// Created by uscova on 23.03.21.
//

#include "rectangle.h"

double rectangle::perimeter()
{
    return a+b;
}

void rectangle::print()
{
    std::cout << "first parameter:" << a << "second parameter:" << b;
}