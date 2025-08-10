/********************************************************
Provide the definition of the Lion class here.
Remember, this is the definition, or implementation, of
the methods we declared in the Lion.h class declaraion
will be implemented here.
*******************************************************/

#include "Lion.h"

// Implementing Lion's methods below this line

std::string Lion::get_noise(){
    std::string output {"Roar"};
    return output;
}; // Pure virtual function

int Lion::get_num_legs() {
    int legs {4};
    return legs;
}; // Pure virtual function