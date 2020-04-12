#include "../inc/Demand.h"
#include "../inc/Good.h"

using namespace std;

Good::Good() {
    value = 0;
}

void Good::addDemand(Demand demand) {
    this->demand.push_back(demand);
    this->value++;
}

int Good::getValue() {
    return this->value;
}

string Good::toString() {
    string str = "Good:\n";

    str += "  value: " + to_string(this->value) + "\n";
    str += "  demand:\n";

    if (this->demand.size()) {
        for (int i = 0; i < this->demand.size(); i++) {
            str += "    " + this->demand.at(i).toString();
        }
    }
    else {
        str += "None\n";
    }

    return str;
}
