//
#include<iostream>
#include<string>
#include<vector>
#include "roll.h"

#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter : public Roll
{
    public:
        Shooter(){}
        Roll* throw_dice(int &die1, int &die2);
        void display_rolled_values();

    private:
        Roll* rolls;
};

#endif