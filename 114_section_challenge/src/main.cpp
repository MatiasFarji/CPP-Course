#include <iostream>
#include <vector>
#include <string>

/*
Section Challenge
Section 9 Challenge Overview
Welcome to the Section 9 challenge. This challenge integrates nearly everything we have learned to solve a problem. The Section 9 workspace contains the challenge project, and there is also a challenge solution project which includes my solution that I will cover in the video following this one.

Let's discuss the challenge and then I will provide a demonstration of the running solution.

Challenge Description
This challenge involves using a collection or list of integers and allowing the user to select options from a menu. The menu options are: p, a, m, s, l, and q.

Pressing p prints the elements of the list.
Pressing a adds a number to the list, which the user is prompted to enter.
Pressing m displays the mean of the numbers in the list.
Pressing s displays the smallest number in the list.
Pressing l displays the largest number in the list.
Pressing q quits the program.
Any other input should result in an "invalid choice" message.

Input Validation and Case Insensitivity
Only valid choices are accepted from the user. Both uppercase and lowercase selections should be allowed. If the user enters an illegal choice, the program should display "unknown selection, please try again" and then redisplay the menu.

Printing the List (Option P)
If the user enters either uppercase or lowercase p, the program displays all elements of the list. This list consists of integers.

If the list is empty, display two square brackets [] and the message "the list is empty".
If the list is not empty, display all integers inside square brackets separated by spaces. For example, if the list contains 1, 2, 3, 4, and 5, display them accordingly.
Adding Numbers to the List (Option A)
If the user enters uppercase or lowercase a, prompt them for a number to add to the list. After adding the number, display a message confirming the number added.

Duplicate entries are allowed in the list.
Calculating the Mean (Option M)
If the user enters uppercase or lowercase m, calculate and display the average (mean) of the numbers in the list.

If the list is empty, display "unable to calculate the mean, no data".
The mean should be displayed as a double (floating-point number), not an integer.
Finding the Smallest Number (Option S)
If the user enters uppercase or lowercase s, find and display the smallest integer in the list.

For example, if the list contains 2, 4, 5, and 1, display "the smallest number is 1".
If the list is empty, display "unable to determine the smallest number".
Finding the Largest Number (Option L)
If the user enters uppercase or lowercase l, find and display the largest integer in the list.

If the list is empty, handle accordingly.
Quitting the Program (Option Q)
If the user presses q, display "goodbye" and terminate the program.

*/

void display_menu();
char get_input_char();
float get_input_float();
char to_lower(char);
void print_vector(std::vector<float>);
void add_float(std::vector<float> &vec);
void print_mean(std::vector<float> vec);
void print_smallest(std::vector<float> vec);
void print_largest(std::vector<float> vec);

int main()
{
    char input{};
    std::vector<float> user_list{};
    /*
    Pressing p prints the elements of the list.
    Pressing a adds a number to the list, which the user is prompted to enter.
    Pressing m displays the mean of the numbers in the list.
    Pressing s displays the smallest number in the list.
    Pressing l displays the largest number in the list.
    Pressing q quits the program.
    */
    do
    {
        display_menu();
        input = get_input_char();

        switch (input)
        {
        case 'p':
            print_vector(user_list);
            break;
        case 'a':
            add_float(user_list);
            break;
        case 'm':
            print_mean(user_list);
            break;
        case 's':
            print_smallest(user_list);
            break;
        case 'l':
            print_largest(user_list);
            break;
        case 'q':
            std::cout << "Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Wrong election, try again" << std::endl;
            break;
        }
    } while (input != 'Q' && input != 'q');
    return 0;
}

void display_menu()
{
    std::cout << "P - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display mean of the numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - Display the largest number" << std::endl;
    std::cout << "Q - Quit" << std::endl;
    std::cout << "Select an option: ";
}

char get_input_char()
{
    char input{};
    std::cin >> input;
    return to_lower(input);
}

float get_input_float()
{
    float input{};
    std::cout << "Enter a float number for input " << &input << " :";
    std::cin >> input;
    return input;
}

char to_lower(char input)
{
    switch (input)
    {
    case 'P':
        return 'p';
        break;
    case 'A':
        return 'a';
        break;
    case 'M':
        return 'm';
        break;
    case 'S':
        return 's';
        break;
    case 'L':
        return 'l';
        break;
    case 'Q':
        return 'q';
        break;
        break;
    default:
        return input;
        break;
    }
}

void print_vector(std::vector<float> vec)
{
    std::cout << '[';
    int counter{0};
    for (float list_number : vec)
    {
        if (counter > 0)
            std::cout << ' ';
        std::cout << list_number;
        counter++;
    }
    std::cout << ']' << std::endl;
    return;
}

void add_float(std::vector<float> &vec)
{
    float input_number{get_input_float()};
    vec.push_back(input_number);
}

void print_mean(std::vector<float> vec)
{
    float mean{0};
    float sum{0};
    for (float list_number : vec)
    {
        sum += list_number;
    }
    if (static_cast<int>(vec.size()) > 0)
    {
        mean = sum / static_cast<int>(vec.size());
        std::cout << "The mean of the numbers is: " << mean << std::endl;
    }
    else
        std::cout << "Unable to calculate the mean - no data" << std::endl;
}

void print_smallest(std::vector<float> vec)
{
    float smallest_number{};
    int counter{0};
    for (float list_number : vec)
    {
        if (counter == 0)
            smallest_number = list_number;
        else if (smallest_number > list_number)
            smallest_number = list_number;
        counter++;
    }
    std::cout << "The smallest number is: " << smallest_number << std::endl;
}

void print_largest(std::vector<float> vec)
{
    float largest_number{};
    int counter{0};
    for (float list_number : vec)
    {
        if (counter == 0)
            largest_number = list_number;
        else if (largest_number < list_number)
            largest_number = list_number;
        counter++;
    }
    std::cout << "The largest number is: " << largest_number << std::endl;
}
