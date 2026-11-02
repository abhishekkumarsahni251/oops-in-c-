#include <iostream>
using namespace std;

class Student {
public:
    int marks;
};

int main() {
    Student s[2];

    s[0].marks = 80;
    s[1].marks = 90;

    Student *p = &s[0];

    cout << p->marks;
    return 0;
}