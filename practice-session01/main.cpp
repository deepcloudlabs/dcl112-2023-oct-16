#include "Vehicle.h"

#include <iostream>

using namespace std;

int main() {

    // Create a vehicle that can handle 10,000 kilograms weight
    cout << endl << "Creating a vehicle with a 10,000kg maximum load.";
    Vehicle vehicle(10000.0);
    Vehicle vehicle2(vehicle);

    // Add a few boxes
    cout << endl << "Add box #1 (500kg) : " << vehicle.addBox(500.0);
    cout << endl << "Add box #2 (250kg) : " << vehicle.addBox(250.0);
    cout << endl << "Add box #3 (5000kg) : " << vehicle.addBox(5000.0);
    cout << endl << "Add box #4 (4000kg) : " << vehicle.addBox(4000.0);
    cout << endl << "Remove box #2 (250kg) : " << vehicle.removeBox(250.0);
    cout << endl << "Add box #5 (300kg) : " << vehicle.addBox(300.0);

    // Print out the final vehicle load
    cout << endl << "Vehicle load is " << vehicle.getLoad() << " kg\n";
    return 0;
}

