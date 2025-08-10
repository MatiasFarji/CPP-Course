#include <iostream>
using namespace std;
void echo_number(double number = 15); //Obligado a hacerlo en el prototipo, y con "=" en lugar de "{}", si no no compila

int main() {
    echo_number(10);
    return 0;
}

void echo_number(double number) {
    cout << number << endl;
}