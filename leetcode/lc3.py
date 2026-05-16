def lengthOfLongestSubstring(s: str) -> int:
    last = {} # letter: index
    l, res = -1, 0

    for r in range(len(s)):
        if s[r] in last and last[s[r]] > l:
            l = last[s[r]]
        last[s[r]] = r
        res = max(res, r - l)
    
    return res

n = int(input())
for i in range(n):
    s = input()
    print(lengthOfLongestSubstring(s))