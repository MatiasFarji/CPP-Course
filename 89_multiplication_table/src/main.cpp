#include <iostream>

int main()
{

    for (int y{1}; y < 10; y++)
    {
        std::cout << "\t" << y;
    }
    std::cout << std::endl;
    
    for (int x{1}; x < 10; x++)
    {
        std::cout << x;

        for (int y{1}; y < 10; y++)
        {
            std::cout << "\t" << x * y;
        }

        std::cout << std::endl;
    }
    return 0;
}