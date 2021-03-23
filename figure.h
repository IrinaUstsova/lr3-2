//
// Created by uscova on 23.03.21.
//

#ifndef UNTITLED6_FIGURE_H
#define UNTITLED6_FIGURE_H

#include <iostream>

class figure
{
protected:
    double length;
    double hight;
    double width;
public:
    virtual double perimeter() = 0;
    virtual void print() = 0;
};


#endif //UNTITLED6_FIGURE_H
