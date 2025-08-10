#include <iostream>

int main() {
    int arr[10] {0};
    arr[0] = 100;
    arr[-1] = 1000;

    std::cout << arr[2];

    return 0;
}
