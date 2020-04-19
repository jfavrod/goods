#include "../../inc/TangibleGoods/Bread.h"
#include "../../inc/TangibleGoods/Flour.h"

Bread::Bread() {
    this->name = "bread";
    this->requisites.push_back(Flour());
}
