for i in range(4):
    x, y = map(int, input().split())
    if x > y:
        for i in range(x, y - 1, -1):
            j = y + (x - 1)
            print(f"{i} {j}", end="")
            if i != y or j !=x:
                print(" - ", end="")
        print()
    else:
        for i in range(x, y + 1):
            j = y - (i - x)
            print(f"{i} {j}", end="")
            if i != y or j != x:
                print(" - ", end="")
        print()