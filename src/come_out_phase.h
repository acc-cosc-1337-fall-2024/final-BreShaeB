//
#include<iostream>
#include<string>
#include<vector>
#include "phase.h"

#ifndef COME_OUT_H
#define COME_OUT_H
class ComeOutPhase : public Phase{

    //ComeOutPhase(int& x) : roll_outcome(x) { }
    //ComeOutPhase() : roll_outcome(x) {}

    public:
        int default_outcome = 0;
        
        ComeOutPhase(int& x) : roll_outcome(x) { }
        ComeOutPhase() : roll_outcome(default_outcome) {}
        //ComeOutPhase() {}
        virtual int get_outcome() const;
        int roll_outcome;
};
#endif