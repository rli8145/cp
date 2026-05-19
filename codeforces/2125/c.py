def findMultiples(l, r, n):
    p = l
    while p % n != 0:
        p += 1
        if p > r:
            return 0
    res = 1 + (r - p) // n
    if p % 2 == 0:
        res //= 2
    else:
        res = (res + 1) // 2
    return res

t = int(input())
for i in range(t):
    l, r = map(int, input().split())
    res = (r - l + 1)
    if l % 2 == 0:
        res //= 2
    else:
        res = (res + 1) // 2
    res -= (findMultiples(l, r, 3) + findMultiples(l, r, 5) + findMultiples(l, r, 7) + findMultiples(l, r, 105))
    res += (findMultiples(l, r, 15) + findMultiples(l, r, 21) + findMultiples(l, r, 35))
    print (res)