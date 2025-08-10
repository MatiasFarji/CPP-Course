#include "Trust_Account.h"

bool Trust_Account::deposit(double amount) {
    if (amount >= 5000.0) {
        amount += 50;
    }
    return Savings_Account::deposit(amount);

};

bool Trust_Account::withdraw(double amount) {
    bool success {false};
    if (this->num_withdrawals > 2) {
        return success;
    }

    if ((this->balance / 100 * 20) < amount) {
        return success;
    }

    success = Savings_Account::withdraw(amount);
    if (success) {
        this->num_withdrawals++;
    }
    return success;
};

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
    os << "[Trust Account: " << account.name << ": " << account.balance << ", " << account.int_rate << "%]";
    return os;
}
