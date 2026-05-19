import math

t = int(input())
for i in range(t):
    a, b, k = map(int, input().split())
    
    factor = math.gcd(a, b)
    a //= factor
    b //= factor

    res = 0
    if a > k or b > k:
        print (2) #spam 0,1/1,0 and 1,1
    else:
        print (1)    