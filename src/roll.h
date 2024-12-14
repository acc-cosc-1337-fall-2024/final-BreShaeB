//
#include<iostream>
#include<string>
#include<vector>
#include "die.h"
#ifndef ROLL_H
#define ROLL_H

class Roll : public Die
{

    public:
        Roll() : die1(0), die2(0) {}
        Roll(int& x, int& y) : die1(x), die2(y){ }
        void roll_dice();
        int roll_value();

    private:
        int die1;
        int die2;
        int rolled_value;
};
#endif