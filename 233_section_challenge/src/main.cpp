// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

const std::string alphabet {"!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~"};
std::string trim_white_spaces(std::string);


int main() {
    
    std::ifstream in_file {"./src/romeoandjuliet.txt"};
    std::ofstream out_file{"./src/romeoandjuliet_copy.txt"};
    
    if (!in_file) {
        std::cerr << "Error al leer fichero de entrada" << std::endl;
        return 1;
    }

    if (!out_file) {
        std::cerr << "Error al escribir fichero de salida" << std::endl;
        return 1;
    }

    std::string line {};
    bool has_ascii_characters {false};
    size_t line_number {1};
    
    while (std::getline(in_file, line)) {
        for (size_t i = 0; i < line.length(); i++) {
            for (size_t j = 0; j < alphabet.length(); j++) {
                if (alphabet.at(j) == line.at(i)) {
                    has_ascii_characters = true;
                    break;
                }
            }

            if (has_ascii_characters) break;
        }

        if (has_ascii_characters) {
            out_file << std::setw(5) << std::left << line_number;
            line_number++;
        }

        out_file << trim_white_spaces(line) << std::endl;

        has_ascii_characters = false;

    }

    in_file.close();
    out_file.close();
    return 0;
}

std::string trim_white_spaces(std::string input) {
    size_t initial_whitespaces {0};
    size_t final_whitespaces {0};
    bool is_alphabet {false};

    for (char c : input) {
        for (char alphabet_letter : alphabet) {
            if (alphabet_letter == c) {
                is_alphabet = true;
                break;
            }
        }

        if (is_alphabet) {
            break;
        }
        initial_whitespaces++;
    } 

    for (size_t i = (input.length() - 1); i > 0; i--) {
        for (char alphabet_letter : alphabet) {
            if (alphabet_letter == input.at(i)) {
                is_alphabet = true;
                break;
            }
        }

        if (is_alphabet) {
            break;
        }
        final_whitespaces++;
    }

    return input.substr(initial_whitespaces, (input.length() - initial_whitespaces - final_whitespaces) );
}