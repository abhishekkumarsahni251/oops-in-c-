#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[39] = "Hello";
    char b[30] = " World";

    cout << "Length = " << strlen(a) << endl;

    strcat(a, b);
    cout << "Joined String = " << a << endl;

    cout << "Compare = " << strcmp("ABC", "ABC");

    return 0;
}