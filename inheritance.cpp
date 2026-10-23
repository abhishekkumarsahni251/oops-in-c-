#include <iostream>
using namespace std;

class Parent {
protected:
    int number = 123;
};

class Child : public Parent {
public:
    void show() {
        cout << number;
    }
};

int main() {
    Child c;
    c.show();
    return 0;
}