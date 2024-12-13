//
#include "die.h"
#include<iostream>
#include<cstdlib>
using std::cout;

int Die::roll()
{
    int num = 0;
    num = rand() % 6 + 1;
    return num;
}