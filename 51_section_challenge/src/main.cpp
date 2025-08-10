#include <iostream>

int main() {
    const float price_per_small_room {25.0}; //Dolars
    const float price_per_large_room {35.0}; //Dolars
    const float sales_tax_rate {0.06};
    const int estimates_expiry {30}; //Days
    int number_small_rooms {0};
    int number_large_rooms {0};

    std::cout << "Enter the number of small rooms and large rooms separated by spaces" << std::endl;
    std::cin >> number_small_rooms >> number_large_rooms;

    double cost {0};
    cost = number_small_rooms * price_per_small_room + number_large_rooms * price_per_large_room;
    double tax {0};
    tax = cost * sales_tax_rate;
    

    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << number_small_rooms << std::endl;
    std::cout << "Number of large rooms: " << number_large_rooms << std::endl;
    std::cout << "Price per small room: $" << price_per_small_room << std::endl;
    std::cout << "Price per large room: $" << price_per_large_room << std::endl;
    std::cout << "Cost: $" << cost << std::endl;
    std::cout << "Tax: $" << tax << std::endl;
    std::cout << "====================================" << std::endl;
    std::cout << "Total estimate: $" << cost + tax << std::endl;
    std::cout << "This estimate is valid for: 30 days" << std::endl;
    return 0;
}