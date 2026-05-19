#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int l = 0, r = (int)s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(2 * n);
        for (int& x : a) cin >> x;

        // locate zeros
        vector<int> loc0;
        for (int i = 0; i < 2 * n; i++) {
            if (a[i] == 0) {
                loc0.push_back(i)
            }
        }
        int l = loc0[0], r = loc0[1];
        
        
    }
}