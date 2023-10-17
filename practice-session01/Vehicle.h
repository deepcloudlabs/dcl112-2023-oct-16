#ifndef PRACTICE_SESSION01_VEHICLE_H
#define PRACTICE_SESSION01_VEHICLE_H


class Vehicle {
private:
    double load;
    const double capacity;
public:
    Vehicle(double capacity) : capacity(capacity), load(0.0){}
    double getLoad() const { return this->load;}
    double getCapacity() const { return this->capacity;}
    bool addBox(double weight);
    bool removeBox(double weight);
};

#endif //PRACTICE_SESSION01_VEHICLE_H
