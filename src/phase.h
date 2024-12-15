//
#include<iostream>
#include<string>
#include<vector>
#include "roll.h"

#ifndef PHASE_H
#define PHASE_H

class Phase{
    public:
        virtual int roll_outcome(Roll* roll) = 0;
        virtual ~Phase() = default;

        enum class RollOutcome{
            natural,
            craps,
            point,
            seven_out,
            nopoint
        };
};

//enum class RollOutcome{
//
  //  natural,
    //craps,
    //point,
    //seven_out,
    //nopoint
//};

#endif