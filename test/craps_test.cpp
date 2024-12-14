#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
using std::cout;

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

TEST_CASE("Verify that rolled_value is returning a value between 2-12"){

    int die1 = 0, die2 = 0;
    Roll roll(die1, die2);

    for (int i = 0; i < 10; i++){
        int die1 = roll.roll();
        int die2 = roll.roll();

        int result = die1 + die2;
        REQUIRE(result >= 2);
        REQUIRE(result <= 12);
    } 

}

TEST_CASE("Verify that shooter returns a Roll and that the roll is from 2-12"){

    Shooter roll;

    std::vector<Roll*> rolls;

    for (int i = 0; i < 10; i++){

        int die1 = 0, die2 = 0;
        Roll* roll = new Roll(die1, die2);
        roll->roll_dice();  // Perform the roll
        rolls.push_back(roll);  // Add the Roll pointer to the vector
    }
}