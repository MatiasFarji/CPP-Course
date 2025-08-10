#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

class Trust_Account: public Savings_Account {
        friend std::ostream &operator<<(std::ostream &os, const Trust_Account&account);
    private:
        double interest_rate;
        size_t num_withdrawals;
        static constexpr const double def_interest_rate {0.0};
        static constexpr const char *def_name {"Unnamed Account"};
        static constexpr const double def_balance {0.0};
    public:
        Trust_Account(std::string name = def_name, double balance = def_balance, double interest_rate = def_interest_rate): Savings_Account{name, balance, interest_rate}, num_withdrawals{0} {
        };

        bool withdraw(double amount);
        bool deposit(double amount);
};

#endif