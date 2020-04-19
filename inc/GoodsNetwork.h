#ifndef GOODS_NETWORK_H
#define GOODS_NETWORK_H

#include <map>
#include "../inc/Demand.h"
#include "../inc/Good.h"

using namespace std;

class GoodsNetwork {
    protected:
    vector<Demand> demands;
    vector<Good> goodsAvailable;

    map<Demand*, Good*> meetsDemand;

    bool allRequiredGoodsAvailable(Good &good);
    bool isInDemands(Demand &demand);
    bool isInGoods(Good &good);

    public:
    GoodsNetwork();
    bool addDemand(Demand demand, double value);
    bool addGood(Good);
    void printMeetsDemand();
    string toString();
    bool updateDemand(string demandName, double value);
};

#endif
