#include <iostream>
#include <vector>
using namespace std;
int calculate_pairs(vector<int> vec);

int main() {
    vector <int> vec {1, 2 , 3};
    cout << calculate_pairs(vec);
    return 0;
}

int calculate_pairs(vector<int> vec) {
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result {0};
    int vector_size {static_cast <int>(vec.size())};
    if (vector_size > 0) {
        for (int i {0}; i < vector_size; i++) {
            for (int j {i + 1}; j < vector_size; j++) {
                result += vec.at(i) * vec.at(j);
            }
        }  
    }
     
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}