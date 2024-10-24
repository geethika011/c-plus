#include <iostream>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.accountNumber = "123456789";
    account.accountHolder = "John Doe";
    account.balance = 1000.50;
    account.display();
    return 0;
}
