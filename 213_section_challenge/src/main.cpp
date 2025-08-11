#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    try {
        Checking_Account my_account {"Meine Konto", -50.0};
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        Checking_Account my_account {"Meine Konto", 50.0};
        my_account.withdraw(49.0); //Tiene una fee de retiro 1.5, por eso falla
        std::cout << my_account << std::endl;
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        Checking_Account my_account {"Meine Konto", 50.0};
        my_account.withdraw(48.4);
        std::cout << my_account << std::endl;
    } catch (std::exception &ex) {
        std::cout << ex.what() << std::endl;
    }


    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

