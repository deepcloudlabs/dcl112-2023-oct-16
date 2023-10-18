

#ifndef MODULE08_CAT_H
#define MODULE08_CAT_H

#include "Animal.h"
#include "Pet.h"

namespace zoo {

    class Cat : public Animal, public Pet {
        string name;
    public:
        Cat(string name = "Tekir") : Animal(4), name(name) {}

        void eat() override;

        void set_name(string name) override;

        string get_name() override;

        void play() override;
    };

} // zoo

#endif //MODULE08_CAT_H
