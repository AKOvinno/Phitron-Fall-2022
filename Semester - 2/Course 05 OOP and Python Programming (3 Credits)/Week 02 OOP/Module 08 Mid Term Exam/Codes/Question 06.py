N, M = map(int, input().split())
A = list(map(int, input().split()))

frequency = {}

for num in A:
    if num in frequency:
        frequency[num] += 1
    else:
        frequency[num] = 1

for i in range(1, M+1):
    if i in frequency:
        print(frequency[i])
    else:
        print(0)
