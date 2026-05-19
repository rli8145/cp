class Solution:
    def longestIncreasingPath(self, matrix) -> int:
        
        memo = {}
        def dp(x,y):
            if (x,y) in memo:
                return memo[(x,y)]
            poss,curr = [0],matrix[y][x]
            if x > 0 and matrix[y][x-1] > curr:
                poss.append(dp(x-1,y))
            if y > 0 and matrix[y-1][x] > curr:
                poss.append(dp(x,y-1))
            if x < len(matrix[0])-1 and matrix[y][x+1] > curr:
                poss.append(dp(x+1,y))
            if y < len(matrix)-1 and matrix[y+1][x] > curr:
                poss.append(dp(x,y+1))

            memo[(x,y)]=max(poss)+1
            return memo[(x,y)]

        res = 1
        for y in range(len(matrix)):
            for x in range(len(matrix[0])):
                res = max(res,dp(x,y))
        return res