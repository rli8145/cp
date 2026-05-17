#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r = n - 1;
        while ((l < r) && ((s[l] == '0') ^ (s[r] == '0'))) {
            l++; r--;
        }
        cout << (r - l + 1) << '\n';
    }
    return 0;
}