#include <iostream>
#include "../inc/GoodsNetwork.h"
#include "../inc/Demand.h"

GoodsNetwork::GoodsNetwork() {}

bool GoodsNetwork::addDemand(Demand demand, double value) { 
    if (!isInDemands(demand)) {
        this->demands.push_back(demand);
        return true;
    }

    return false;
}

bool GoodsNetwork::addGood(Good good) {
    if (!this->isInGoods(good) && this->allRequiredGoodsAvailable(good)) {
        this->goodsAvailable.push_back(good); 

        for (Demand demand : good.getDemands()) {
            if (this->isInDemands(demand)) {
                this->meetsDemand[&demand] = &(this->goodsAvailable.back());
                return true;
            }
        }
    }

    return false;
}

bool GoodsNetwork::allRequiredGoodsAvailable(Good &good) {
    for (Good req : good.getRequiredGoods()) {
        if (!this->isInGoods(good)) {
            return false;
        }
    }

    return true;
}

bool GoodsNetwork::isInDemands(Demand &demand) {
    for (Demand existingDemand : this->demands) {
        if (existingDemand.getName() == demand.getName()) {
            return true;
        }
    }

    return false;
}

bool GoodsNetwork::isInGoods(Good &good) {
    for (Good existingGood : this->goodsAvailable) {
        if (existingGood.getName() == good.getName()) {
            return true;
        }
    }

    return false;
}

void GoodsNetwork::printMeetsDemand() {
    std::cout << "Meeting Demands:" << endl;
    Demand demand;
    Good good;

    for (pair <Demand*, Good*> mapping : this->meetsDemand) {
        demand = *mapping.first;
        good = *mapping.second;

        std::cout << good.getName() << " <-meets-> " << demand.getName() << endl; 
    }
}

string GoodsNetwork::toString() {
    string str = "GoodsNetwork:\n";
    return str;    
}