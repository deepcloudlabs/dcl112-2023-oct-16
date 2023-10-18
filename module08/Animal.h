#ifndef MODULE08_ANIMAL_H
#define MODULE08_ANIMAL_H

namespace zoo {

    class Animal {
    protected:
        int legs;
    public:
        Animal(int legs) : legs(legs) {}

        int get_legs() const { return this->legs; }

        virtual void walk();
        virtual void eat()=0; // abstract method, pure virtual method
    };

} // zoo

#endif //MODULE08_ANIMAL_H
