#include "code/Circle.h"
#include "code/Shape.h"

int main() {
    Shape *shape;
    Circle circle(5);

    shape = &circle;
    shape->area();
    return 0;
}

