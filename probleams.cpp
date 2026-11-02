#include <iostream>
using namespace std;

class Bank {
public:
    int accountNo;
    float balance;

    void input() {
        cout << "Enter account number: ";
        cin >> accountNo;

        cout << "Enter balance: ";
        cin >> balance;
    }

    void display() {
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance;
    }
};

int main() {
    Bank b;

    b.input();
    b.display();

    return 0;
}