import itertools

l = [2,4,7]
n = len(l)

subsets = []
while n != 1:
    for i in range(len(l)):
        subsets.append(list(itertools.combinations(l, n)))

    n -= 1        
    print(f'\n\n: {n}')
    break

print(subsets)

