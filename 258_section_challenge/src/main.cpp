// Section 20
// Challenge 3  
// Maps and Sets

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <iomanip>

// Used for Part1
// Display the word and count from the 
// std::map<std::string, int>

void display_words(const std::map<std::string, int> &words) {
    std::cout << std::setw(12) << std::left << "\nWord"
                << std::setw(7) << std::right << "Count"<< std::endl;
    std::cout << "===================" << std::endl;
    for (auto pair: words)
        std::cout << std::setw(12) << std::left << pair.first 
                       << std::setw(7) << std::right << pair.second << std::endl;
}

// Used for Part2
// Display the word and occurences from the 
// std::map<std::string, std::set<int>>

void display_words(const std::map<std::string, std::set<int>> &words)
{
     std::cout << std::setw(12) << std::left << "\nWord"
                << "Occurrences"<< std::endl;
    std::cout << "=====================================================================" << std::endl;
    for (auto pair: words) {
        std::cout << std::setw(12) << std::left << pair.first 
                       << std::left << "[ ";
        for (auto i: pair.second) 
            std::cout << i << " ";
        std::cout << "]" << std::endl;
    }
}

// This function removes periods, commas, semicolons and colon in 
// a string and returns the clean version
std::string clean_string(const std::string &s) {
    std::string result;
    std::copy_if(s.begin(), s.end(), std::back_inserter(result), [] (char c) {
        return (std::isalpha(c) || c == ' ');
    });
    return result;
}

// Part1 process the file and builds a map of words and the 
// number of times they occur in the file

void part1() {
    std::map<std::string, int> words;
    std::string line;
    std::string word;
    std::ifstream in_file {"words.txt"};
    std::stringstream ss;

    std::pair<std::map<std::string,int>::iterator, bool> inserter;

    if (in_file) {
        
        // You implement this code
        while (std::getline(in_file, line)) {
            line = clean_string(line);
            ss.clear();
            ss.str(line);
            while (ss >> word) {
                inserter = words.insert({word, 1});

                if (!inserter.second) {
                    inserter.first->second++;
                }
            }
        }
        
        in_file.close();
        display_words(words);
    } else {
        std::cerr << "Error opening input file" << std::endl;
    }
}
    
// Part2 process the file and builds a map of words and a 
// set of line numbers in which the word appears
void part2() {
    std::map<std::string, std::set<int>> words;
    std::string line;
    int line_number {1};
    std::string word;
    std::ifstream in_file {"words.txt"};
    std::stringstream ss;
    std::pair<std::map<std::string,std::set<int>>::iterator, bool> inserter;
    
    if (in_file) {
     
        // You implement this code
        while (std::getline(in_file, line)) {
            line = clean_string(line);
            ss.clear();
            ss.str(line);
            while (ss >> word) {
                inserter = words.insert({word, {line_number}});

                if (!inserter.second) {
                    inserter.first->second.insert(line_number);
                }
            }
            line_number++;
        }
        
        in_file.close();
        display_words(words);
    } else {
        std::cerr << "Error opening input file" << std::endl;
    }
}

int main() {
    part1();
    part2();
    return 0;
}

