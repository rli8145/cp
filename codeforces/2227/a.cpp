#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int x; int y; cin >> x >> y;
        if ((x % 2) && (y % 2)) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}