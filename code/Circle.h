//
// Created by Dhanish Mehta on 11/16/22.
//

#ifndef CIRCLE_H
#define CIRCLE_H


#include "Shape.h"

class Circle: public Shape{
    double radius;
public:
    explicit Circle(double r);
    double area() override;
    double perimeter() override;
    double volume() override;
};


#endif //CIRCLE_H
