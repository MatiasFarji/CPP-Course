#include "Animal.h"

std::string Animal::get_noise(){
    std::string output {"Che"};
    return output;
}; // Pure virtual function

int Animal::get_num_legs() {
    int legs {2};
    return legs;
}; // Pure virtual function