#ifndef DEMAND_H
#define DEMAND_H

#include <string>
using namespace std;

class Demand {
    protected:
    string name;

    /**
     * Percentage of the population willing and able to trade
     * for a good that meets this demand.
     */
    double value;

    public:
    Demand();
    Demand(string);
    Demand(string name, double value);
    string getName();
    double getValue();
    void setValue(double);
    string toString();
};

#endif
