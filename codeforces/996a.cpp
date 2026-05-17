#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int bills[] = {100, 20, 10, 5, 1};
    int n; cin >> n;
    int res = 0;
    for (int b : bills) {
        res += (n / b);
        n %= b;
    }
    cout << res;
    return 0;
}