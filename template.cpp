#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(2, 3) << endl;
    cout << add<double>(2.5, 3.5);
    return 0;
}