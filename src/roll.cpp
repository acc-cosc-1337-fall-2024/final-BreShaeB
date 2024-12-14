//
#include "roll.h"
#include<iostream>
#include<cstdlib>
using std::cout;

void Roll::roll_dice()
{
    die1 = roll();
    die2 = roll();
    rolled_value = die1 + die2;
}

int Roll::roll_value()
{
   // rolled_value = roll_value();
    return rolled_value;
}