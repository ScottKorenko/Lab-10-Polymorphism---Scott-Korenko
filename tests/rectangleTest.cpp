#include "../include/catch.hpp"
#include "../code/Rectangle.h"
#include "stdexcept"

SCENARIO("Check rectangle") {
    GIVEN("A length and width") {
        Rectangle rectangle(5.5, 6);
        WHEN("area()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(rectangle.area())
                    .margin(0.1)==33);
            }
        }
        WHEN("perimeter()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(rectangle.perimeter())
                                .margin(0.1)==23);
            }
        }
        WHEN("volume()") {
            THEN("Then exception must be thrown") {
                REQUIRE_THROWS(rectangle.volume());
                REQUIRE_THROWS_AS(rectangle.volume(), std::runtime_error);
            }
        }
    }
}