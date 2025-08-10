#include <iostream>
#include <string>
using namespace std;



int sum_of_digits(int n) {
    // Write your code below this line
    if (n < 10) {
        return n;
    }

    int rest {n % 10};
    n = n / 10;

    return rest + sum_of_digits(n);
    
    // Write your code above this line
}

int main() {
    cout << sum_of_digits(1550);
    return 0;
}