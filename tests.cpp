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

TEST_CASE( "Two numbers, comma delimited, returns the sum" ) {
    REQUIRE( stringCalculate("13, 48") == 51);
    REQUIRE( stringCalculate("321, 8") == 329);
    REQUIRE( stringCalculate("4,82") == 86);
}
