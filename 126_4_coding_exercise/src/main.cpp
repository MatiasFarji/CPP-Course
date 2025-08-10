// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.
#include <string>
#include <iostream>

std::string reverse_string(const std::string &str) {
    std::string reversed;
    // Write your code below this line
    if (str.length() > static_cast<size_t>(0)) {
        std::string *ptr_reversed {&reversed};
        for (size_t i {str.length() - 1}; i > 0; i--) {
            reversed.push_back(str.at(i));
        }
        reversed.push_back(str.at(0));
    }
 
    // Write your code abocve this line
    return reversed;
}

int main() {
    std::string str {"Hola"};
    std::cout << str << std::endl;
    std::string reversed {reverse_string(str)};
    std::cout << reversed << std::endl;
    return 0;
}