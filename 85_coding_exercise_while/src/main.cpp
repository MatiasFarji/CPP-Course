#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec);

int main() {
    vector <int> vec {-99};
    cout << count_numbers(vec) << endl;
    return 0;
}

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    
    int count {0};
    int i {0};
    int vector_size {static_cast<int>(vec.size())};
    while (i < vector_size) {
        if (vec.at(i) == -99) {
            i = vector_size;
        }
        else {
            i++;
            count++;
        }
    }
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}