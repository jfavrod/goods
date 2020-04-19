#include "../inc/Demand.h"

using namespace std;

Demand::Demand() {
    this->name = "";
    this->value = 0;
}

Demand::Demand(string name) {
    this->name = name;
    this->value = 0;
}

Demand::Demand(string name, double value) {
    this->name = name;
    this->value = value;
}

string Demand::getName() {
    return this->name;
}

double Demand::getValue() {
    return this->value;
}

void Demand::setValue(double newVal) {
    this->value = newVal;
}

string Demand::toString() {
    return this->name;
}
