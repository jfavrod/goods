#include "../inc/Demand.h"

using namespace std;

Demand::Demand(string name) {
    this->name = name;
}

string Demand::toString() {
    return this->name;
}
