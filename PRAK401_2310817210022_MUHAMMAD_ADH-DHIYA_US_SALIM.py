for i in range(0, 3):
    n, t = input().split()
    n = int(n)
    for j in range(1, 50+1):
        if j % n == 0:
            print(t, end="")
        else:
            print(j, end="")
    print()