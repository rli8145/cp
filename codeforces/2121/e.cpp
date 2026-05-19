#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string l; string r; cin >> l >> r;
        int res = 0; int i = 0;
        while ((i < l.size()) && (l[i] == r[i])) {
            i++; res += 2;
        }


        if ((i < l.size()) && ((int)r[i] - (int)l[i] <= 1)) {
            res++; i++;
            while ((i < l.size()) && (r[i] == '0') && (l[i] == '9')) {
                res++; i++;
            }
        }
        cout << res << '\n';
    }
}