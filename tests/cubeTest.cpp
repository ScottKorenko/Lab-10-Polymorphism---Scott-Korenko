#include "../include/catch.hpp"
#include "../code/Cube.h"
#include "stdexcept"

SCENARIO("Check Cube") {
    GIVEN("A radius") {
        Cube cube(5.5);
        WHEN("area()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(cube.area())
                    .margin(0.1)==181.5);
            }
        }
        WHEN("perimeter()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(cube.perimeter())
                                .margin(0.1)==66);
            }
        }
        WHEN("volume()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(cube.volume())
                                .margin(0.1)==166.375);
            }
        }
    }
}
