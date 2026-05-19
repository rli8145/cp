#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        if (n < 3) {
            cout << "No" << '\n';
        } else {
            // concacenation exists iff duplicate char not at ends
            string res = "No"; set<char> seen;
            seen.insert(s[0]);
            seen.insert(s[n-1]);
            for (int i = 1; i < n - 1; i++) {
                if (seen.count(s[i])) {
                    res = "Yes";
                    break;
                } 
                seen.insert(s[i]);
            }
            cout << res << '\n';
        }
    }
    return 0;
}