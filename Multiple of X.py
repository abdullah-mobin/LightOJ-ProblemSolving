t = int(input())

for i in range(t):
    x, n = map(int, input().split())

    if x > n:
        print("Invalid!")
    else:
        for j in range(x, n+1, x):
            print(j)
    print()
