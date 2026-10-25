#include <iostream>
using namespace std;

class BankAccount {
public:
    int accountNo;
    float balance;

    void showDetails() {
        cout << accountNo << endl;
        cout << balance << endl;
    }
};

int main() {
    BankAccount b1;

    b1.accountNo = 101;
    b1.balance = 5000;

    b1.showDetails();
    return 0;
}