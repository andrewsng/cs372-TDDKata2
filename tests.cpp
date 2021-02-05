#include "catch.hpp"

#include "calculator.h"


TEST_CASE( "An empty string returns zero" ) {
    REQUIRE( stringCalculate("") == 0 );
}

TEST_CASE( "A single number returns the value" ) {
    REQUIRE( stringCalculate("6") == 6);
    REQUIRE( stringCalculate("24") == 24);
    REQUIRE( stringCalculate("578") == 578);
}
