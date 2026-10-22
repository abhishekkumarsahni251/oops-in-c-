#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter count: ";
    cin >> n;

    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << "Sum: " << sum << "\n";
    cout << "Max: " << *max_element(a.begin(), a.end()) << "\n";
    return 0;
}