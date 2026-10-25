#include <iostream>
using namespace std;

class Addition {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Addition obj;

    cout << obj.add(2, 3) << endl;
    cout << obj.add(2, 3, 4);

    return 0;
}