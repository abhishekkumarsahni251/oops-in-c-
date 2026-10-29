#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = arr.size();

    // prefix[i] = sum of arr[0..i-1]
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + arr[i];
    }

    // Range sum query: sum of arr[l..r] (inclusive)
    int l = 2, r = 5;
    int sum = prefix[r + 1] - prefix[l];
    cout << "Sum from " << l << " to " << r << " = " << sum << endl; // 4+1+5+9 = 19

    return 0;
}