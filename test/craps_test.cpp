#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify that die is rolling only from 1-6") {
	Die roll;
    for (int i = 0; i < 10; i++) { // Test multiple rolls
        int result = roll.roll();
        REQUIRE(result >= 1);
        REQUIRE(result <= 6);
		//cout<<result;
    }
}
