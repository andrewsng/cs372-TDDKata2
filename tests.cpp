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
    REQUIRE( stringCalculate("13, 48") == 61);
    REQUIRE( stringCalculate("321, 8") == 329);
    REQUIRE( stringCalculate("4,82") == 86);
}

TEST_CASE( "Two numbers, newline delimited, returns the sum" ) {
    REQUIRE( stringCalculate("13 \n48") == 61);
    REQUIRE( stringCalculate("321\n 8") == 329);
    REQUIRE( stringCalculate("4\n82") == 86);
}

TEST_CASE( "Three numbers, delimited either way, returns the sum" ) {
    REQUIRE( stringCalculate("7, 12\n100") == 119);
    REQUIRE( stringCalculate("82\n 8,3") == 93);
    REQUIRE( stringCalculate("115 \n15 ,6") == 136);
}
