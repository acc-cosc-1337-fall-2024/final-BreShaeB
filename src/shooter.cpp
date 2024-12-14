//
#include "shooter.h"
#include<iostream>
#include<cstdlib>
#include<vector>
using std::cout;

std::vector<Roll*> rolls;

Roll* Shooter::throw_dice(int &die1, int &die2)
{
    Roll* rollInstance = new Roll(die1, die2);
    rollInstance->roll_dice();
    std::vector<Roll*> rolls;

    for (int i = 0; i < 5; ++i) {
        int die1 = 0, die2 = 0;
        Roll* roll = new Roll(die1, die2);
        roll->roll_dice();
        rolls.push_back(roll);
    }
    return rollInstance;
}

void display_rolled_values()
{
    std::cout << "\nResults of all rolls:\n";
    for (Roll* roll : rolls) {
        std::cout << "Roll value: " << roll->roll_value() << std::endl;
    }
    for (Roll* roll : rolls) {
        delete roll;  // Free the dynamically allocated memory
    }
}