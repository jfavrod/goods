#include <iostream>
#include "../../inc/Demand.h"
#include "../../inc/Good.h"

using namespace std;

void construction();
void addDemand();
void toString();

int main() {
    construction();
    addDemand();
    toString();

    return 0;
}

void construction() {
    cout << "Construction... ";
    Good good = Good();
    cout << "pass." << endl;
}

void addDemand() {
    cout << "addDemand... ";
    Good good;
    int beforeCount = good.getDemands().size();

    good.addDemand(Demand("test demand"));

    if (good.getDemands().size() == (beforeCount + 1)) {
        cout << "pass." << endl;
    }
    else {
        cout << "fail." << endl;
    }
}

void toString() {
    cout << "toString... ";

    Good good = Good();
    string str = good.toString();

    if (str.size() > 0) {
        cout << "pass." << endl;
    }
    else {
        cout << "fail." << endl;
    }
}
