//
#include<iostream>
#include<string>
#include<vector>
#include "phase.h"

#ifndef POINT_PHASE_H
#define POINT_PHASE_H

class PointPhase : public Phase
{
    //get_outcome();
    //
    public:
        virtual int get_outcome() = 0;
        //int overrid get_outcome();
        int roll_outcome = 0;
        //PointPhase( int point) : point(point) {}
        
        PointPhase() : point(0){}
        PointPhase(int p) : point(p){ }
        //get_outcome();
        //int default_outcome = 0; // Or any suitable default value
        //ComeOutPhase(int& x) : roll_outcome(x) { }
        //ComeOutPhase() : roll_outcome(default_outcome) { }
        //Phase :: get_outcome();

    private:
        int point;
};

#endif