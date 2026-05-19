#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        vector<int> two, three, six, none;
        int n; cin >> n;
        while (n--) {
            int cur; cin >> cur;
            if (cur % 6 == 0) six.push_back(cur);
            else if (cur % 3 == 0) three.push_back(cur);
            else if (cur % 2 == 0) two.push_back(cur);
            else none.push_back(cur);
        }
        for (int x : six) cout << x << ' ';
        for (int x : three) cout << x << ' ';
        for (int x : none) cout << x << ' ';
        for (int x : two) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}