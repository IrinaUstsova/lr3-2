//
// Created by uscova on 23.03.21.
//

#ifndef UNTITLED6_RECTANGLE_H
#define UNTITLED6_RECTANGLE_H


#include "figure.h"

class rectangle : public figure
{
private:
    double a;
    double b;
public:
    double perimeter();
    void print();
};


#endif //UNTITLED6_RECTANGLE_H
