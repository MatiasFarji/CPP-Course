// Section 16 
// Challenge
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
    // Savings 

    vector<Account*> sav_accounts;
    Account *ptr_account1 = new Savings_Account{};
    Account *ptr_account2 = new Savings_Account{"Superman"};
    Account *ptr_account3 = new Savings_Account{"Batman", 2000};
    Account *ptr_account4 = new Savings_Account{"Wonderwoman", 5000, 5.0};

    sav_accounts.push_back(ptr_account1);
    sav_accounts.push_back(ptr_account2);
    sav_accounts.push_back(ptr_account3);
    sav_accounts.push_back(ptr_account4);

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
   
    delete ptr_account1;
    delete ptr_account2;
    delete ptr_account3;
    delete ptr_account4;

   // Checking
   
    vector<Account*> check_accounts;


    ptr_account1 = new Checking_Account{};
    ptr_account2 = new Checking_Account{"Kirk"};
    ptr_account3 = new Checking_Account{"Spock", 2000};
    ptr_account4 = new Checking_Account{"Bones", 5000};

    check_accounts.push_back(ptr_account1);
    check_accounts.push_back(ptr_account2);
    check_accounts.push_back(ptr_account3);
    check_accounts.push_back(ptr_account4);

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);


    delete ptr_account1;
    delete ptr_account2;
    delete ptr_account3;
    delete ptr_account4;

    // Trust
  
    vector<Account*> trust_accounts;

    ptr_account1 = new Trust_Account{};
    ptr_account2 = new Trust_Account{"Athos", 10000, 5.0};
    ptr_account3 = new Trust_Account{"Porthos", 20000, 4.0};
    ptr_account4 = new Trust_Account{"Aramis", 30000};

    trust_accounts.push_back(ptr_account1);
    trust_accounts.push_back(ptr_account2);
    trust_accounts.push_back(ptr_account3);
    trust_accounts.push_back(ptr_account4);

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(trust_accounts, 1000);


    delete ptr_account1;
    delete ptr_account2;
    delete ptr_account3;
    delete ptr_account4;

    
    return 0;
}

