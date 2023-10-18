#include <iostream>
#include "Cat.h"

using namespace std;
namespace zoo {
    void Cat::eat() {
        cout << this->name << " is eating now..." << endl;
    }

    void Cat::set_name(string name) {
        this->name = name;
    }

    string Cat::get_name() {
        return this->name;
    }

    void Cat::play() {
        cout << this->name << " is playing now..." << endl;
    }
} // zoo