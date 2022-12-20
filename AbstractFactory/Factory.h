#ifndef FACTORY_H
#define FACTORY_H

#include "Vehicle.h"

class Factory {
    public:
    Vehicle* createCar();
    Vehicle* createBike();
};

#endif