
#include <iostream>
using namespace std;

class Student {
public:
    Student() {
        cout << "Default Constructor\n";
    }

    Student(int a) {
        cout << "Age: " << a << endl;
    }

    Student(int a, int b) {
        cout << "Age: " << a << ", Marks: " << b;
    }
};

int main() {
    Student s1;
    Student s2(20);
    Student s3(90, 85);

    return 0;
}