// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

const char alphabet [] {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

bool is_palindrome(const std::string& s)
{   
    std::deque<char> normal;

    for (char c: s) {
        for (char letter: alphabet) {
            if (letter == ::tolower(c)) 
                normal.push_back(letter);
        }
    }

    auto reversed = normal.crbegin();

    for (char c: normal) {
        if (*reversed != c) {
            return false;
        }

        reversed++;
    }
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}