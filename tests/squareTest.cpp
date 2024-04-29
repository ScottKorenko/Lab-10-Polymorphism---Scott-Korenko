#include "../include/catch.hpp"
#include "../code/Square.h"
#include "stdexcept"

SCENARIO("Check square") {
    GIVEN("A length") {
        Square square(5.5);
        WHEN("area()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(square.area())
                    .margin(0.1)==30.25);
            }
        }
        WHEN("perimeter()") {
            THEN("Then value must be returned") {
                REQUIRE(Approx(square.perimeter())
                                .margin(0.1)==22);
            }
        }
        WHEN("volume()") {
            THEN("Then exception must be thrown") {
                REQUIRE_THROWS(square.volume());
                REQUIRE_THROWS_AS(square.volume(), std::runtime_error);
            }
        }
    }
}