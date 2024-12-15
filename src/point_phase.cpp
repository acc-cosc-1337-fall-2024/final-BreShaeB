//
#include "point_phase.h"
#include<iostream>
#include<vector>

int PointPhase::get_outcome()
{
    //
    //int roll_outcome1 = static_cast<int>(roll_outcome);
    if (roll_outcome == point)
    {
        //
        //int value = static_cast<int>(RollOutcome::point);
        return static_cast<int>(RollOutcome::point);
        //return value;
    }
    else if (roll_outcome == 7)
    {
        return static_cast<int>(RollOutcome::seven_out);
    }
    else{
        return static_cast<int>(RollOutcome::nopoint);
    };
    return 0;
}