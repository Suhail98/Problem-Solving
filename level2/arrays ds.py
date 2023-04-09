def reverseArray(a):
    for i in range(int(len(a)/2)):
        a[i], a[len(a)-i-1] = a[len(a)-i-1], a[i]
    return a
