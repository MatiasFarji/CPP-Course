#include <iostream>

int main() {
    int x;
    double y;
    y = static_cast <double> (10) / (x = 3);

    std::cout << "X: " << x << " Y: " << y << std::endl;

    return 0;
}