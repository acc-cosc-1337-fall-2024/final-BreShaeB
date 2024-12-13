//
#include<iostream>
#include<string>
#include<vector>
#ifndef DIE_H
#define DIE_H

class Die
{
public:
    int roll();

private:
    int sides = 6;
};

#endif