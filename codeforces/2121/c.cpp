#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; int m; cin >> n >> m;

        int M = INT_MIN; int count = 0;
        int mat[n][m];
        unordered_map<int, int> rows, cols; 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
                if (mat[i][j] == M) {
                    count++;
                    rows[i]++; cols[j]++;
                } else if (mat[i][j] > M) {
                    M = mat[i][j]; count = 1;
                    rows = {{i, 1}}; cols = {{j, 1}};
                }
            }
        }

        int maxRow = 0, maxCol = 0; 
        for (auto [r, cnt] : rows) maxRow = max(maxRow, cnt);
        for (auto [c, cnt] : cols) maxCol = max(maxCol, cnt);


        if ((maxRow + maxCol == count) || (maxRow + maxCol == count + 1)) {
            cout << (M - 1) << '\n';
        } else {
            cout << M << '\n';
        }
    }
    return 0;
}