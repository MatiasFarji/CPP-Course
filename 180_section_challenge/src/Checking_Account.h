#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"
#include <string>

class Checking_Account: public Account {
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
    private:
        double withdrawal_fee;
        static constexpr const double def_withdrawal_fee {1.50};
        static constexpr const char *def_name {"Unnamed Account"};
        static constexpr const double def_balance {0.0};
    public:
        Checking_Account(std::string name = def_name, double balance = def_balance, double withdrawal_fee = def_withdrawal_fee): Account{name, balance}, withdrawal_fee{withdrawal_fee} {
        };

        bool withdraw(double amount);
};

#endif