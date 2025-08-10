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

class Dog: public Animal {
    public:
        // Constructor for Animal class that initializes name and age
        Dog(const std::string& name, int age) : Animal{name, age} {}

        // Pure virtual function for getting the noise an animal makes
        virtual std::string get_noise() override;

        // Pure virtual function for getting the number of legs an animal has
        virtual int get_num_legs() override;

        virtual ~Dog() {};
};



// Write your code above this line
#endif