#include "../include/catch.hpp"
#include "../code/Circle.h"
#include "../code/Sphere.h"
#include "../code/Rectangle.h"
#include "../code/Square.h"
#include "../code/Cube.h"
#include "../code/NegativeError.h"


SCENARIO("Check for Negative Exception") {
    GIVEN("A Circle") {
        WHEN("constructor is called") {
            THEN("exception must be thrown") {
                REQUIRE_THROWS_AS(Circle(-1), NegativeError);
            }
        }
    }
    GIVEN("A Sphere") {
        WHEN("constructor is called") {
            THEN("exception must be thrown") {
                REQUIRE_THROWS_AS(Rectangle(-1,1), NegativeError);
            }
        }
    }
    GIVEN("A Rectangle") {
        WHEN("constructor is called") {
            THEN("exception must be thrown") {
                REQUIRE_THROWS_AS(Square(-1), NegativeError);
            }
        }
    }
    GIVEN("A Square") {
        WHEN("constructor is called") {
            THEN("exception must be thrown") {
                REQUIRE_THROWS_AS(Cube(-1), NegativeError);
            }
        }
    }
    GIVEN("A Cube") {
        WHEN("constructor is called") {
            THEN("exception must be thrown") {
                REQUIRE_THROWS_AS(Sphere(-1), NegativeError);
            }
        }
    }
}