//## Run-Time Polymorphism (5 Marks)

//**Definition:**

//Run-time polymorphism means the same function works in different ways when the program runs.

//It is done by function overriding and virtual functions in C++.

//**Example:**

//```cpp
#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Class A";
    }
};

class B : public A {
public:
    void show() override {
        cout << "Class B";
    }
};

int main() {
    A* p;
    B obj;
    p = &obj;

    p->show();
    return 0;
}