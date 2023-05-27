def split_balanced_string(S):
    counter = 0
    count_L = 0
    count_R = 0
    balanced_strings = []

    for ch in S:
        if ch == 'L':
            count_L += 1
        elif ch == 'R':
            count_R += 1

        if count_L == count_R:
            counter += 1
            balanced_strings.append(S[:count_L + count_R])
            S = S[count_L + count_R:]
            count_L = 0
            count_R = 0

    return counter, balanced_strings

S = input()
count, strings = split_balanced_string(S)
print(count)

for i in strings:
    print(i)
