#include "../include/catch.hpp"
#include "../code/Sphere.h"
#include "stdexcept"

SCENARIO("Check Sphere") {
    GIVEN("A radius") {
        Sphere sphere(5.5);
        WHEN("area()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(sphere.area())
                    .margin(0.1)==379.94);
            }
        }
        WHEN("perimeter()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(sphere.perimeter())
                                .margin(0.1)==34.54);
            }
        }
        WHEN("volume()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(sphere.volume())
                                .margin(0.1)==696.556);
            }
        }
    }
}