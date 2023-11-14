for i in range(3):
    n, k = map(int, input().split())
    SumAll = 0
    for i in range(1, n+1):
        SumLine = 0
        for j in range(i, 0, -1):
            h = j * k
            SumLine += h
            print(f"({j} * {k})", end="")
            if j > 1:
               print(" + ", end="")
        SumAll += SumLine
        print(f" = {SumLine}")
    print(SumAll)
    