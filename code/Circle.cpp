#include <cmath>
#include <cstdio>
#include "Circle.h"
#include "stdexcept"
using namespace std;

Circle::Circle(double r): Shape(), radius(r) {}

double Circle::area() {
    double area = M_PI * pow(radius,2);
    printf("Area of circle is %.2f", area);
    return area;
}

double Circle::perimeter() {

}

double Circle::volume() {
    throw runtime_error("Volume not applicable to circle");
}