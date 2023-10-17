
#include "Vehicle.h"

bool Vehicle::addBox(double weight) {
    // validation rule
    if (weight <= 0) return false;
    // business rule
    if (weight + this->load > this->capacity) return false;
    this->load += weight;
    return true;
}

bool Vehicle::removeBox(double weight) {
    // validation rule
    if (weight <= 0) return false;
    // validation rule
    if (weight > this->load) return false;
    this->load -= weight;
    return true;
}