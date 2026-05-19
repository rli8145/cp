#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int count = 0;
        for (char c : s) {
            if (c == '(') count++;
            else count--;
        }
        if (count == 0) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}