// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>

int main() {
    
    std::ifstream in_file {"romeoandjuliet.txt"};
    if (!in_file) {
        std::cerr << "No se ha podido abrir el archivo" << std::endl;
        return 1;
    }

    char input_string [30] {};
    std::cout << "Enter the substring to search for, not more than 30 chars:";
    std::cin.getline(input_string, 30);

    char last_c {'\0'};
    char c {};
    size_t words {0};
    size_t coincidences {0};
    size_t coincident_chars {0};
    size_t input_length {0};
    
    constexpr char alphabet[] =
    "!\"#$%&'()*+,-./0123456789:;<=>?@"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`"
    "abcdefghijklmnopqrstuvwxyz{|}~";

    for (char c: input_string) {
        if (c != '\0')
            input_length++;
    }
    
    while (in_file.get(c)) {

        if (coincident_chars == input_length) {
            coincident_chars = 0;
            coincidences++;
        }

        if (c == ' ' || c == '\r' || c == '\n' || c == '\t') {
            coincident_chars = 0;

            for (char letter: alphabet) {
                if (letter == last_c) {
                    words++;
                    break;
                }
            }
        } else {
            if (c == input_string[coincident_chars]) {
                coincident_chars++;
            } else {
                coincident_chars = 0;
            }
        }

        last_c = c;

    }


    in_file.close();

    std::cout << words << " words were searched..." << std::endl;
    std::cout << "The substring " << input_string << " was found " << coincidences << " times" << std::endl;
    std::cout << std::endl;
    return 0;
}

