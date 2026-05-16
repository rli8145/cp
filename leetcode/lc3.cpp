#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> last;
    int l = -1, res = 0;
    for (int r = 0; r < (int)s.size(); ++r) {
        char c = s[r];
        if (last.count(c) && last[c] > l) {
            l = last[c];
        }
        last[c] = r;
        res = max(res, r - l);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    while (n--) {
        string s; cin >> s;
        cout << lengthOfLongestSubstring(s) << '\n';
    }
    return 0;
}