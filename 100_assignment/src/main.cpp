#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    char input_character {};
    do {
        cout << "Enter Y/y for starting the software of Letter Pyramid" << endl;
        cin >> input_character;

        if (input_character == 'Y' || input_character == 'y') {
            string input_for_pyramid {};
            cout << "Enter an input for generating the Letter Pyramid" << endl;
            cin.ignore();  // limpia el '\n' pendiente del buffer
            getline(cin, input_for_pyramid);

            if (input_for_pyramid.length() > 0) {
                int left_spaces {static_cast<int>(input_for_pyramid.length() - 1)};
                string spaces (left_spaces, ' ');
                for (size_t i {1}; i <= input_for_pyramid.length(); i++) {
                    cout << spaces; 
                    cout << input_for_pyramid.substr(0, i);
                    if (i > 1) {
                        for (int j {static_cast<int>(i) - 2}; j >= 0; j--) {
                            cout << input_for_pyramid.at(j);
                        }
                    }
                    cout << endl;

                    if (left_spaces > 0) {
                        left_spaces --;
                        spaces.assign(left_spaces, ' ');
                    }
                }
                
            }
        }

    } while (input_character == 'Y' || input_character == 'y');
    return 0;
}