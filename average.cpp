#include <iostream>
using namespace std;

int main() {
    int n, largest;

    cin >> largest;

    for (int i = 2; i <= 10; i++) {
        cin >> n;

        if (n > largest) {
            largest = n;
        }
    }

    cout << "Largest = " << largest;
    return 0;
}