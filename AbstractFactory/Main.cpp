#include "Factory.h"

int main() {
    Factory f = Factory();
    Vehicle* c = f.createCar();
    Vehicle* b = f.createBike();

    c->startEngine();
    b->startEngine();

    delete c;
    delete b;

    return 0;
};