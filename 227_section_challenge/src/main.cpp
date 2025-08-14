// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    std::ifstream in_file {"responses.txt"};

    if (!in_file) {
        std::cerr << "No se ha podido abrir el fichero de respuestas" << std::endl;
        return 1;
    }

    std::string correct_answer {};
    std::getline(in_file, correct_answer);

    
    std::string student_name {};
    std::string student_response {};
    size_t note {0};
    size_t sum {0};
    size_t students_number {0};
    float average_score {0};
    

    std::cout << setw(30) << std::left << "Student" << setw(10) << "Score" << std::endl;
    std::cout << setfill('-') << setw(40) << "" << std::endl;
    std::cout << setfill(' ') << std::left;

    while (getline(in_file, student_name) && getline(in_file, student_response)) {
        students_number++;
        
        for (size_t i = 0; i < student_response.length(); i++) {
            if (correct_answer[i] == student_response[i])
                note++;
        }
        sum += note;

        std::cout << setw(30)  <<  student_name << std::flush;
        std::cout << setw(10)  << note << std::endl;

        student_name = "";
        note = 0;
    }

    in_file.close();

    average_score = static_cast<float>(sum) / students_number;

    std::cout << setfill('-') << setw(40) << "" << std::endl;
    std::cout << setfill(' ');
    std::cout << setw(30) << std::left << "Average score" << setw(10) << average_score  << std::endl;
    return 0;
}

