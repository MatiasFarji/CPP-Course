#include <iostream>
#include <string>
using namespace std;

int main() {
    char input_char {};
    do {
        cout << "E - Encrypt message" << endl;
        cout << "D - Decrypt message" << endl;
        cout << "Q - Quit" << endl;
        cout << "Select an option: ";

        cin >> input_char;

        string alphabet {"abcdefghijklmnopqrstuvwxyz"};
        string alphabet_cipher {"zyxwvutsrqponmlkjihgfedcba"};

        switch (input_char) {
            case 'e':
            case 'E': {
                cout << "Enter the message to cipher:";
                string message {};
                cin.ignore();  // limpia el '\n' pendiente del buffer
                getline(cin, message);

                for (size_t i {0}; i < message.length(); i++) {
                    for (size_t j {0}; j < alphabet.length(); j++) {
                        if (message[i] == alphabet[j]) {
                            message[i] = alphabet_cipher[j];
                            break;
                        }
                    }
                }

                cout << "Mensaje encriptado: " << message << endl;
                break;
            }
            case 'd':
            case 'D': {
                cout << "Enter the message to decipher:";
                string message {};
                cin.ignore();  // limpia el '\n' pendiente del buffer
                getline(cin, message);

                for (size_t i {0}; i < message.length(); i++) {
                    for (size_t j {0}; j < alphabet_cipher.length(); j++) {
                        if (message[i] == alphabet_cipher[j]) {
                            message[i] = alphabet[j];
                            break;
                        }
                    }
                }

                cout << "Mensaje desencriptado: " << message << endl;
                break;
            }
            case 'q':
            case 'Q':
                cout << "Goodbye" << endl;
                break;
            default:
                cout << "Unexpected selection" << endl;
                break;
        }


    } while (input_char != 'Q' && input_char != 'q');
    return 0;
}