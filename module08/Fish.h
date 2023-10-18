//
// Created by dcl on 10/18/2023.
//

#ifndef MODULE08_FISH_H
#define MODULE08_FISH_H

#include <iostream>
#include "Pet.h"
#include "Animal.h"

namespace zoo {
    using namespace std;

    class Fish : public Animal, public Pet {
        string name;
    public:
        Fish(string name) : Animal(0), name(name) {}

        void walk() override {
            cout << this->name << " is walking now..." << endl;
        }

        void eat() override {
            cout << this->name << " is eating now..." << endl;
        }

        void set_name(string name) override {
            this->name = name;
        }

        string get_name() override {
            return this->name;
        }

        void play() override {
            cout << this->name << " is playing now..." << endl;
        }
    };

} // zoo

#endif //MODULE08_FISH_H
