#include <iostream>
#include "Animal.h"
#include "Lion.h"

int main () {


    Lion *lion_ptr = new Lion();
    lion_ptr->get_noise();   // I expect a "Roar"
    lion_ptr->get_num_legs(); // I expect back 4

    std::cout << "Sound: " << lion_ptr->get_noise() << ", legs: " << lion_ptr->get_num_legs() << std::endl;

    Animal *animal_ptr = new Lion();
    animal_ptr->get_noise();   // I expect a "Roar"
    animal_ptr->get_num_legs(); // I expect back 4

    std::cout << "Sound: " << animal_ptr->get_noise() << ", legs: " << animal_ptr->get_num_legs() << std::endl;

    return 0;
}