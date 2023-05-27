num = input()
num = int(num)

s = input().split()
dir = {}
for i in s:
    if i not in dir.keys():
        dir[i] = 1
    else:
        dir[i] += 1
c = 0
for i, j, in dir.items():
    if(int(i) > j):
        c += j
    elif(int(i) < j):
        c += abs(int(i) - j)
print(c)
