#include "Checking_Account.h"

bool Checking_Account::withdraw(double amount) {
    amount += this->withdrawal_fee;
    return Account::withdraw(amount);
};

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
    os << "[Checking Account: " << account.name << ": " << account.balance << ", Withdrawal fee: $" << account.withdrawal_fee << "]";
    return os;
}
