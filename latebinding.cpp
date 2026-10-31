#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal Sound";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog Barks";
    }
};

int main() {
    Animal *a;
    Dog d;

    a = &d;
    a->sound();

    return 0;
}