#include <iostream>
using namespace std;

void print(int array [], size_t array_size);
int * apply_all(int array [], size_t array_size, int array2 [], size_t array2_size);
int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};

    int array1 [] {1,2,3,4,5};
    int array2 [] {10,20,30};

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);

    delete [] results;


    return 0;
}


void print(int array [], size_t array_size) {
    while (array_size > 0) {
        cout << *array;
        array++;
        array_size --;
    }
    cout <<endl;
}

int * apply_all(int array [], size_t array_size, int array2 [], size_t array2_size) {
    const size_t temp_array_size {array_size};
    const size_t temp_array2_size {array2_size};
    int *results = new int [array_size * array2_size] {};
    while (array_size > 0) {
        while (array2_size > 0) {
            *results = *array * *array2;
            results++;
            array2++;
            array2_size--;
        }
        array2 -= temp_array2_size;
        array2_size = temp_array2_size;

        array++;
        array_size--;
    }
    results -= temp_array_size * temp_array2_size;
    return results;
}