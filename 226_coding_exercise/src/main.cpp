#include <iostream>
#include <fstream>

void read_file(std::string);

int main() {
    read_file("prueba.txt");
    return 0;
}

void read_file(std::string file_name) {
    //---- YOU WRITE YOUR CODE BELOW THIS LINE----

    std::ifstream in_file {file_name};
    
    if (!in_file) {
        std::cerr << "Error opening file" << std::endl;
    } else {
        char c {};
        while (in_file.get(c)) {
            std::cout << c;
        }
    
        std::cout << std::endl;
   
   
    }
    
    
    //---- YOU WRITE YOUR CODE ABOVE THIS LINE----
}