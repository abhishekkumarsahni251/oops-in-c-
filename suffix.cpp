#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {3, 1, 4, 1, 5, 9, 2, 6};
    int n = arr.size();

    // suffix[i] = sum of arr[i..n-1]
    vector<int> suffix(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    // Range sum query: sum of arr[l..r] (inclusive)
    int l = 2, r = 5;
    int sum = suffix[l] - suffix[r + 1];
    cout << "Sum from " << l << " to " << r << " = " << sum << endl; // 4+1+5+9 = 19

    return 0;
}