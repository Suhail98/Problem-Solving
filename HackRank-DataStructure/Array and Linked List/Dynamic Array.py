def dynamicArray(n, queries):
    v = []
    for i in range(n):
        v.append([])
    ans = []
    last = 0
    for q in queries:
        idx = (q[1] ^ last) % n
        if(q[0] == 1):
            v[idx].append(q[2])
        else:
            last = v[idx][q[2] % len(v[idx])]
            ans.append(last)
    return ans