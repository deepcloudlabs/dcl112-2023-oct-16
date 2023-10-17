#ifndef PRACTICE_SESSION01_VEHICLE_H
#define PRACTICE_SESSION01_VEHICLE_H


class Vehicle {
private:
    double load;
    const double capacity;
public:
    Vehicle(double capacity) : capacity(kiloToNews(capacity)), load(0.0) {}
    Vehicle(const Vehicle& other);
    double getLoad() const { return newsToKilo(this->load); }

    double getCapacity() const { return newsToKilo(this->capacity); }

    bool addBox(double weight);

    bool removeBox(double weight);

private:
    double newsToKilo(double weight) const;

    double kiloToNews(double weight) const;

};

#endif //PRACTICE_SESSION01_VEHICLE_H
