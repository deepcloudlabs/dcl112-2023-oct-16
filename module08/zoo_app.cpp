#include <iostream>
#include "Animal.h"
#include "Spider.h"
#include "Cat.h"
#include "Fish.h"
#include "Pet.h"

using namespace std;
using namespace zoo;

int main() {
    Animal *animals[]{new Spider, new Cat, new Fish("Free Willy"),
                      new Spider, new Cat("Garfield"), new Fish("Nemo")};
    for (Animal *animal: animals) {
        animal->walk();
        animal->eat();
        cout << typeid(*animal).name() << endl;
        cout << typeid(Pet).name() << endl;
        Pet *pet = dynamic_cast<Pet *>(animal);
        if (pet != nullptr) {
            pet->play();
        }
    }
    return 0;
}
