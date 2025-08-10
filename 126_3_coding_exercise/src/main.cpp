#include <iostream>

// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.

void reverse_array(int* arr, int size) {
    //-- Write your code below this 
    size--;
    while (size > 0) {
        arr[0] = arr[size] + arr[0];
        arr[size] = arr[0] - arr[size];
        arr[0] = arr[0] - arr[size];
        arr++; 
        size-= 2;
    }
    
    //-- Write your code above this line
}

void print_array(int arr [], int size) {
    for (int i {0}; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
}


int main() {
    int size = 8;
    int *arr {new int[size] {1,2,3,4,5,6,7,8}};
    print_array(arr, size);
    reverse_array(arr, size);
    print_array(arr, size);
    
    return 0;
}