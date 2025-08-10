#include <iostream>

void swapPointers(int *ptr1, int *ptr2);

int main() {
    int num1 {10};
    int num2 {15};
    int *ptr1 {&num1};
    int *ptr2 {&num2};

    swapPointers(ptr1, ptr2);
    return 0;
}
// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.

void swapPointers(int* ptr1, int* ptr2) {
    //-- Write your code below this line
    std::cout << "Ptr1: " << *ptr1 << std::endl;
    std::cout << "Ptr2: " << *ptr2 << std::endl;

    *ptr1 += *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    std::cout << "Ptr1: " << *ptr1 << std::endl;
    std::cout << "Ptr2: " << *ptr2 << std::endl;
    //-- Write your code above this line
}
