#ifndef MODULE08_SPIDER_H
#define MODULE08_SPIDER_H

#include "Animal.h"

namespace zoo {

    class Spider : public Animal {
    public:
        Spider(): Animal(8){}
        void eat() override;
    };

} // zoo

#endif //MODULE08_SPIDER_H
