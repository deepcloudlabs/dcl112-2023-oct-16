
#include "Vehicle.h"

Vehicle::Vehicle(const Vehicle& other) : capacity(other.capacity){
    this->load = other.load;
}

bool Vehicle::addBox(double weight) {
    weight = kiloToNews(weight);
    // validation rule
    if (weight <= 0) return false;
    // business rule
    if (weight + this->load > this->capacity) return false;
    this->load += weight;
    return true;
}

bool Vehicle::removeBox(double weight) {
    weight = kiloToNews(weight);
    // validation rule
    if (weight <= 0) return false;
    // validation rule
    if (weight > this->load) return false;
    this->load -= weight;
    return true;
}

double Vehicle::newsToKilo(double weight) const {
    return weight / 9.8;
}

double Vehicle::kiloToNews(double weight) const {
    return weight * 9.8;
}