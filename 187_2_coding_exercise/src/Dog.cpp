/********************************************************
Provide the definition of the Dog class here.
Remember, this is the definition, or implementation, of
the methods we declared in the Dog.h class declaraion
will be implemented here.
*******************************************************/

#include "Dog.h"

// Implementing Dog's methods below this line

std::string Dog::get_noise(){
    std::string output {"Woof"};
    return output;
}; // Pure virtual function

int Dog::get_num_legs() {
    int legs {4};
    return legs;
}; // Pure virtual function