#include "Vehicle.h"
#include <iostream>

using namespace std;

int main() {

    // Create a vehicle that can handle 10,000 kilograms weight
    cout << endl << "Creating a vehicle with a 10,000kg maximum load.";
    Vehicle *vehicle = new Vehicle(10'000.0);

    // Add a few boxes
    cout << endl << "Add box #1 (500kg)";
    vehicle->load = vehicle->load + 500.0;

    cout << endl << "Add box #2 (250kg)";
    vehicle->load = vehicle->load + 250.0;

    cout << endl << "Add box #3 (5000kg)";
    vehicle->load = vehicle->load + 5000.0;

    cout << endl << "Add box #4 (4000kg)";
    vehicle->load = vehicle->load + 4000.0;

    cout << endl << "Add box #5 (300kg)";
    vehicle->load = vehicle->load + 300.0;

    // Print out the final vehicle load
    cout << endl << "Vehicle load is "
         << vehicle->getLoad()
         << " kg\n";

    return 0;
}
