#ifndef LION_H
#define LION_H
#include "Animal.h"

/****************************************************************************************
Provide the declaration here for the Lion class.
Remember, this is the declaration only.
This file should contain the Lion class and the prototypes for the Lion class' methods
****************************************************************************************/

// Derived class Lion
// Write your code below this line

class Lion: public Animal {
    public:
        virtual std::string get_noise() override; // Pure virtual function
        virtual int get_num_legs() override; // Pure virtual function
        virtual ~Lion() {};
};



// Write your code above this line
#endif