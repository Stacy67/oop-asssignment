//Stacy Kinya...bcs-05-0060/2025
//Week 8
// A c++ to manage customer accounts in a bank

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double accountBalance;

public:
    
    BankAccount(string name, int number, double balance) {
        accountHolderName = name;
        accountNumber = number;
        accountBalance = balance;
        cout << "Account successfully created" << endl;
    }

   
    void displayAccount() {
        cout << "\n===== Account Details =====" << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number     : " << accountNumber << endl;
        cout << "Account Balance    : $" << accountBalance << endl;
    
    }

    
    ~BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }
};

int main() {
   
    BankAccount myAccount("Philip Mars", 907543, 1000.00);

    myAccount.displayAccount();

    return 0;
}