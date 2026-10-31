#include <iostream>
using namespace std;

class Student {
public:
    void show() {
        cout << "Hello Student";
    }
};

int main() {
    Student s1;
    s1.show();

    return 0;
}