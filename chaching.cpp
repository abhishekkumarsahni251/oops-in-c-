#include <iostream>
using namespace std;

int main() {
    int age = 15;

    try {
        if (age < 18)
            throw age;

        cout << "Allowed";
    }
    catch (int x) {
        cout << "Age is below 18";
    }

    return 0;
}