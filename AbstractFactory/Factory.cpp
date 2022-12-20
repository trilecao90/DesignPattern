#include "Factory.h"

Vehicle* Factory::createCar() {
    return new Car();
};

Vehicle* Factory::createBike() {
    return new Bike();
};