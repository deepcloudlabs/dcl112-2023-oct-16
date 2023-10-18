#include <string>

using namespace std;

#ifndef MODULE08_PET_H
#define MODULE08_PET_H

namespace zoo {

    struct Pet { // interface
        virtual void set_name(string name) = 0;

        virtual string get_name() = 0;

        virtual void play() = 0;
    };

} // zoo

#endif //MODULE08_PET_H
