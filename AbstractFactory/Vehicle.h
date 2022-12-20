#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
    public:
    virtual void startEngine() = 0;
};

class Car : public Vehicle {
    public:
    virtual void startEngine() override;
};

class Bike : public Vehicle {
    public:
    virtual void startEngine() override;
};

#endif