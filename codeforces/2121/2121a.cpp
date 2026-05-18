#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; int s; 
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int res = arr[n-1] - arr[0] + min(abs(arr[n-1] - s), abs(s - arr[0]));
        cout << res << '\n';
    }
    return 0;
}