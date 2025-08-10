#include <iostream>

/*
Section Challenge
Welcome to the section 8 challenge. For this program, I am going to use US dollars and cents, but feel free to use whatever currency system you are familiar with and want to use.

The idea here is to write a program that asks the user to enter the following:

An integer representing the number of cents.
You can assume that the number of cents entered is greater than or equal to zero.

The program then displays how to provide that change to the user. In the U.S., one dollar is 100 cents, a quarter is 25 cents, a dime is 10 cents, a nickel is 5 cents, and a penny is one cent.

For example, suppose the user enters 92 cents. Your results will display that you can provide this change as follows:

No dollars.
Three quarters, which is 75 cents.
One dime, which adds another 10 cents, totaling 85 cents.
One nickel, which adds 5 cents, totaling 90 cents.
Two pennies, which brings the total to 92 cents.
Feel free to use your own currency system. Also, think about how you might want to solve this problem using the modulo operator. When I give you my solution, I will provide two solutions:

One without the modulo operator.
One that uses the modulo operator.
This way, you can see two different approaches to the problem.

A quick hint: please do not just sit down and start coding this. Think about how you want to solve it. Write down some pseudocode with English-like statements to get your thoughts straight. Figure out your algorithm or the steps you want to use to solve the program.

Have fun, and make sure you test your program thoroughly. Don't forget to test with zero and with large numbers.

Let me demonstrate a couple of sample runs so you can see how this works. The program prompts: "Enter an amount in cents." Suppose I type in 92 cents. The program responds:

Dollar: 0
Quarters: 3
Dime: 1
Nickel: 1
Pennies: 2
Just as we would expect.

As mentioned, don't forget to test with zero. In that case, we should get all zeros straight down the line.

Let's also test with 267 cents, which is 2 dollars and 67 cents. In this case, we have:

Two dollars
Two quarters (50 cents)
One dime (10 cents)
One nickel (5 cents)
Two pennies (2 cents)
This totals 267 cents.

Have a go at it, and when you come back, go to the solutions section where I will go over my solution. Good luck!
*/
int main() {
    const int dollar_to_cents {100};
    const int quarter_to_cents {25};
    const int dime_to_cents {10};
    const int nickel_to_cents {5};
    const int penny_to_cents {1};
    int coins_array[5]{0};
    int module_coins {0};

    int amount_in_cents {0};
    std::cout << "Enter an amount in cents" << std::endl;
    std::cin >> amount_in_cents;

    coins_array[0] = amount_in_cents / dollar_to_cents;
    module_coins = amount_in_cents % dollar_to_cents;

    coins_array[1] = module_coins / quarter_to_cents;
    module_coins = module_coins % quarter_to_cents;

    coins_array[2] = module_coins / dime_to_cents;
    module_coins = module_coins % dime_to_cents;

    coins_array[3] = module_coins / nickel_to_cents;
    module_coins = module_coins % nickel_to_cents;

    coins_array[4] = module_coins / penny_to_cents;
    module_coins = module_coins % penny_to_cents;

    if (coins_array[0] > 0) {
        std::cout << "Dollars: " << coins_array[0] << std::endl;
    }
    std::cout << "Quarters: " << coins_array[1] << std::endl;
    std::cout << "Dimes: " << coins_array[2] << std::endl;
    std::cout << "Nickels: " << coins_array[3] << std::endl;
    std::cout << "Pennies: " << coins_array[4] << std::endl;
    

    return 0;
}