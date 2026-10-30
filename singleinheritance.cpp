#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Base class";
    }
};

class B : public A {
public:
    void showB() {
        cout << "\nDerived class";
    }
};

int main() {
    B obj;
    obj.showA();
    obj.showB();
    return 0;
}