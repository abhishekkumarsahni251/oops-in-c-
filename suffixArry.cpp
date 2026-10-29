#include <bits/stdc++.h>
using namespace std;

// Simple approach: saare suffixes sort karo, O(n^2 log n)
vector<int> buildSuffixArraySimple(const string& s) {
    int n = s.size();
    vector<int> sa(n);
    iota(sa.begin(), sa.end(), 0);
    sort(sa.begin(), sa.end(), [&](int a, int b) {
        return s.compare(a, n - a, s, b, n - b) < 0;
    });
    return sa;
}

// Efficient approach: prefix doubling, O(n log^2 n)
vector<int> buildSuffixArray(const string& s) {
    int n = s.size();
    vector<int> sa(n), rnk(n), tmp(n);

    for (int i = 0; i < n; i++) {
        sa[i] = i;
        rnk[i] = s[i];
    }

    for (int k = 1; ; k <<= 1) {
        auto cmp = [&](int a, int b) {
            if (rnk[a] != rnk[b]) return rnk[a] < rnk[b];
            int ra = a + k < n ? rnk[a + k] : -1;
            int rb = b + k < n ? rnk[b + k] : -1;
            return ra < rb;
        };

        sort(sa.begin(), sa.end(), cmp);

        tmp[sa[0]] = 0;
        for (int i = 1; i < n; i++) {
            tmp[sa[i]] = tmp[sa[i - 1]] + (cmp(sa[i - 1], sa[i]) ? 1 : 0);
        }
        rnk = tmp;

        if (rnk[sa[n - 1]] == n - 1) break; // saare rank unique ho gaye
    }
    return sa;
}

// LCP array (Kasai's algorithm), O(n)
// lcp[i] = sa[i] aur sa[i+1] suffix ka longest common prefix
vector<int> buildLCP(const string& s, const vector<int>& sa) {
    int n = s.size();
    vector<int> rnk(n), lcp(n - 1 > 0 ? n - 1 : 0);
    for (int i = 0; i < n; i++) rnk[sa[i]] = i;

    int h = 0;
    for (int i = 0; i < n; i++) {
        if (rnk[i] + 1 < n) {
            int j = sa[rnk[i] + 1];
            while (i + h < n && j + h < n && s[i + h] == s[j + h]) h++;
            lcp[rnk[i]] = h;
            if (h > 0) h--;
        }
    }
    return lcp;
}

int main() {
    string s = "banana";
    vector<int> sa = buildSuffixArray(s);
    vector<int> lcp = buildLCP(s, sa);

    cout << "Suffix Array:\n";
    for (int i = 0; i < (int)sa.size(); i++) {
        cout << sa[i] << " -> " << s.substr(sa[i]) << "\n";
    }

    cout << "\nLCP Array: ";
    for (int x : lcp) cout << x << " ";
    cout << endl;

    return 0;
}