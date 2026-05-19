t = int(input())
for i in range(t):
    s = input()
    t, f, n = 0, 0, 0
    chars = {}
    for i in s:
        if i == "T":
            t += 1
        elif i == "F":
            f += 1
        elif i == "N":
            n += 1
        else:
            chars[i] = chars.get(i, 0) + 1
    
    res = t*"T" + f*"F" + n*"N"
    for c in chars:
        res += c * chars[c]
    print (res)

# no FFT, NTT
#all T, then all F, then all N