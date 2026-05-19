#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int m, n;
    vector<vector<int>> memo;
    
    int dp(int x, int y, vector<vector<int>>& matrix) {
        if (memo[y][x] != -1) return memo[y][x];
        int longest = 1;
        if ((y > 0) && (matrix[y-1][x] > matrix[y][x])) longest = max(longest, 1 + dp(x, y-1, matrix));
        if ((y < matrix.size() - 1) && (matrix[y+1][x] > matrix[y][x])) longest = max(longest, 1 + dp(x, y+1, matrix));
        if ((x > 0) && (matrix[y][x-1] > matrix[y][x])) longest = max(longest, 1 + dp(x-1, y, matrix));
        if ((x < matrix[0].size() - 1) && (matrix[y][x+1] > matrix[y][x])) longest = max(longest, 1 + dp(x+1, y, matrix));
        memo[y][x] = longest;
        return memo[y][x];
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m = matrix.size(); n = matrix[0].size();
        memo = vector<vector<int>>(m, vector<int>(n, -1));
        int res = 1;
        for (int y = 0; y < matrix.size(); y++) {
            for (int x = 0; x < matrix[0].size(); x++) {
                res = max(res, dp(x, y, matrix));
            }
        }
        return res;
    }
};