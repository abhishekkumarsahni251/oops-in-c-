#include <iostream>
using namespace std;

void change(int &x) {
    x = 20;
    cout << "Inside function: " << x << endl;
}

int main() {
    int a = 10;

    change(a);

    cout << "Inside main: " << a << endl;

    return 0;
}