def main():
    n = int(input())
    arr = list(map(int, input().split()))
    m = float('inf')
    
    for i in range(n):
        c = 0
        while arr[i] % 2 == 0 and arr[i] > 0: 
            c += 1
            arr[i] //= 2
        
        m = min(m, c)
    
    print(m)


main()
