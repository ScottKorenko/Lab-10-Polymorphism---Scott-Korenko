
#ifndef POLYGON_H
#define POLYGON_H
#include "Shape.h"

class Polygon: public Shape{
public:
    double area() override = 0;
    double perimeter() override = 0;
    double volume() override = 0;

};
#endif //POLYGON_H
