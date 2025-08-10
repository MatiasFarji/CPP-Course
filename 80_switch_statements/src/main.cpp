#include <iostream> 

int main() {
    int x {10};
    const int y {10};
    switch (x) {
        case y:
            std::cout << "Bienn!" << std::endl;
            break;
        default:
            break;
    }
    return 0;
}