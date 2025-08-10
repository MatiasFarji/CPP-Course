#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main () {


    Animal *dog_ptr = new Dog("Ella", 17);

    std::cout << "Sound: " << dog_ptr->get_noise() << ", legs: " << dog_ptr->get_num_legs() << std::endl;
    std::cout << "Name: " << dog_ptr->get_name() << ", age: " << dog_ptr->get_age() << std::endl;

    return 0;
}