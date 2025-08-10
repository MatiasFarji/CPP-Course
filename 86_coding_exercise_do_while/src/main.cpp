#include <vector>
#include <iostream>
using namespace std;

/*******************************************************
 * Write your code in the provided area.
 * 
 * This function should use a do while loop to iterate over
 * the automatically provided vector (vec) of characters looking 
 * for the first occurrence of a lowercase English vowel ('a','e','i','o','u').
 * 
 * If a vowel is found, you should display to cout:
 * 
 * "Vowel found: " followed by the vowel that was found.
 * 
 * If no vowel is found in the vector, then you should display to cout:
 * 
 * "No vowel was found"  
 * 
 * For example, below are several examples of vectors and what your output should be:
 * 
 * {'f','r','a','n','k'}    Vowel found: a
 * {'F','R','A','N','K'}    No vowel was found
 * {'h','e','l','l','o'}    Vowel found: e
 * {}                       No vowel was found
 * {'x','y','z','o'}        Vowel found: o
 * 
 * Please do NOT add std::endl or '\n' to your output statement.
 * *****************************************************/
void find_first_vowel(const std::vector<char>& vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    bool found {false};
    int vector_size {static_cast<int>(vec.size())};
    int counter {0};
    do {
        if (vector_size > 0) {
            char c {vec.at(counter)};
            switch (c) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    found = true;
                    cout << "Vowel found: " << c;
                    break;
                default:
                    break;
            }
        }
        counter++;
    } while (!found && counter < vector_size);
    
    if (!found)
        cout << "No vowel was found";
 
    //---- WRITE YOUR CODE ABOVE THIS LINE----
}

/*
 {'f','r','a','n','k'}    Vowel found: a
 * {'F','R','A','N','K'}    No vowel was found
 * {'h','e','l','l','o'}    Vowel found: e
 * {}                       No vowel was found
 * {'x','y','z','o'}        Vowel found: o
*/
int main() {
    vector <char> vec {};
    find_first_vowel(vec);
    return 0;
}