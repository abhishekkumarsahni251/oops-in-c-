#include <iostream>
using namespace std;

class Student {
private:
    int marks = 90;

public:
    friend void show(Student s);
};

void show(Student s) {
    cout << s.marks;
}

int main() {
    Student s;
    show(s);

    return 0;
}