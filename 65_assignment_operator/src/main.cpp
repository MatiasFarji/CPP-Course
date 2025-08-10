#include <iostream>

int main() {
    int x;
    int y;
    y = 10 / (x = 3);

    std::cout << "X: " << x << " Y: " << y << std::endl;

    return 0;
}