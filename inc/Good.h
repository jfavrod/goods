#ifndef GOOD_H
#define GOOD_H

#include <string>
#include <vector>
#include "../inc/Demand.h"

using namespace std;

class Good {
    protected:
    vector<Demand> demand;
    int value;

    public:
    Good();
    void addDemand(Demand);
    int getValue();
    string toString();
};

#endif
