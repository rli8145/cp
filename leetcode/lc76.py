class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if len(t) > len(s):
            return ""
        
        count = {}
        for char in t:
            count[char] = count.get(char,0) + 1

        res, l = (0, len(s)), 0
        for r, char in enumerate(s):
            if char in count:
                count[char] -= 1
            
            while all(count[c] <= 0 for c in count):
                if r - l < res[1] - res[0]:
                    res = (l, r)
                if s[l] in count:
                    count[s[l]] += 1
                l += 1
    
        return "" if res[1] == len(s) else s[res[0]:res[1]+1]