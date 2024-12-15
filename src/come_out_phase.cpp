//
#include "come_out_phase.h"
#include<iostream>

int ComeOutPhase :: get_outcome() const
{
    if (roll_outcome == 7 || roll_outcome == 11){
    
        //
        int value = static_cast<int>(RollOutcome::natural);
        return value;
    }
    else if(roll_outcome == 2 || roll_outcome == 3 || roll_outcome == 12)
    {
        //
        int value = static_cast<int>(RollOutcome::craps);
        return value;
    }
    else{
        int value = static_cast<int>(RollOutcome::point);
        return value;
    }

    return 0;
}