#include <iostream>
#include "../../inc/Demand.h"
#include "../../inc/Good.h"
#include "../../inc/GoodsNetwork.h"
#include "../../inc/TangibleGoods/Bread.h"

void addDemand();
void addGood();

int main() {
    addDemand();
    addGood();
}

void addDemand() {
    GoodsNetwork goodsNet;
    Demand demand = Demand("test demand");

    cout << "addDemand... ";

    if (goodsNet.addDemand(demand, 0.5)) {
        cout << "pass." << endl;
    }
    else {
        cout << "fail." << endl;
    }
}

void addGood() {
    GoodsNetwork goodsNet;
    Demand d1 = Demand("bread");
    Demand d2 = Demand("flour");
    Bread bread = Bread();

    goodsNet.addDemand(d1, 0.5);
    goodsNet.addDemand(d2, 0.75);
    
    for (Good good : bread.getRequiredGoods()) {
        goodsNet.addGood(good);
    }

    goodsNet.addGood(bread);
    goodsNet.printMeetsDemand();
}
