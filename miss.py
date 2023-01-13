def sol():
    n = int(input())
    arr = [int(x) for x in input().split()]
    return sum(list(range(1,n +1))) - sum(arr)

print(sol())
