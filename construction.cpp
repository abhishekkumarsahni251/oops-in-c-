#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    Student(int m) {
        marks = m;
    }

    void compare(Student s) {
        if (marks > s.marks)
            cout << "First student has more marks";
        else if (marks < s.marks)
            cout << "Second student has more marks";
        else
            cout << "Both have equal marks";
    }
};

int main() {
    Student s1(80);
    Student s2(70);

    s1.compare(s2);
    return 0;
}