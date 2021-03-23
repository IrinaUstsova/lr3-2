//
// Created by uscova on 23.03.21.
//

#ifndef UNTITLED6_TRIANGLE_H
#define UNTITLED6_TRIANGLE_H


#include "figure.h"

class triangle : public figure
{
private:
    double a;
    double b;
    double c;
public:
    virtual double perimeter();
    void print();
};


#endif //UNTITLED6_TRIANGLE_H
