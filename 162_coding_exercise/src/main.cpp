#include "Money.h"
#include <iomanip>
/*
Given the provided Money class,  please add the overloaded equality operators == and !=

These overloaded operators should return a bool and should be implemented as member functions.

Given 2 Money objects, consider them to be equal if both the dollars and cents attributes are the same for both objects.

First, add the overloaded operator function declarations to the Money class declaration in Money.h

Second, add the overloaded operator function definitions in Money.cpp

These overloaded functions should not modify the objects in any way.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure you give it a go yourself first, and only check the solution if you really get stuck.
*/
int main() {
    Money total_first {254};
    Money total_second {254};

    std::cout <<std::boolalpha;

    std::cout << "Total First == Total Second: " << (total_first != total_second) << std::endl;
    return 0;
}