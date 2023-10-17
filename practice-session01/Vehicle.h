#ifndef PRACTICE_SESSION01_VEHICLE_H
#define PRACTICE_SESSION01_VEHICLE_H


class Vehicle {
public:
    double load;
    const double capacity;
    Vehicle(double capacity) : capacity(capacity), load(0.0){}
    double getLoad() const { return this->load;}
    double getCapacity() const { return this->capacity;}
};

#endif //PRACTICE_SESSION01_VEHICLE_H
