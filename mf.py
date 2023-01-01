l = [1,1,2,2,2,3,3,4,4,4,4,4,4]

cnt = 0
best = 0
for i in range(len(l) - 1):
    if l[i] == l[i + 1]:
        cnt += 1
    else:
        best = max(cnt, best)
        cnt = 0

print(best)
    
