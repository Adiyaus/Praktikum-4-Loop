for i in range(0, 3):
    n = int(input())
    for j in range(1, n+1):
        if j % 2 != 0:
            print(j, end="")
    print()
    for j in range(n, 0, -1):
        if j % 2 ==0:
            print(j, end="")
    print()