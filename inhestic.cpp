#include <iostream>
using namespace std;

class A {
protected:
    int x = 10;
};

class B : public A {
public:
    void show() {
        cout << x;
    }
};

int main() {
    B obj;
    obj.show();
    return 0;
}