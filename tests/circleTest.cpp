#include "../include/catch.hpp"
#include "../code/Circle.h"
#include "stdexcept"

SCENARIO("Check Circle") {
    GIVEN("A radius") {
        Circle circle(5.5);
        WHEN("area()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(circle.area())
                    .margin(0.1)==94.985);
            }
        }
        WHEN("perimeter()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(circle.perimeter())
                                .margin(0.1)==34.54);
            }
        }
        WHEN("volume()") {
            THEN("Then exception must be thrown") {
                REQUIRE_THROWS(circle.volume());
                REQUIRE_THROWS_AS(circle.volume(), std::runtime_error);
            }
        }
    }
}