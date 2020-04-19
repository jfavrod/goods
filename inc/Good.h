#ifndef GOOD_H
#define GOOD_H

#include <string>
#include <vector>
#include "../inc/Demand.h"

using namespace std;

class Good {
    protected:
    vector<Demand> demand;
    string name;
    vector<Good> requisites;
    double value;

    public:
    Good();
    void addDemand(Demand);
    string getName();
    vector<Demand> &getDemands();
    vector<Good> &getRequiredGoods();
    int getValue();
    string toString();
};

#endif
