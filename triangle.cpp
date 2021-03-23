//
// Created by uscova on 23.03.21.
//

#include "triangle.h"

double triangle::perimeter()
{
    return a+b+c;
}

void triangle::print()
{
    std::cout << "first parameter:" << a << "second parameter:" << b << "third parameter:" << c;
}