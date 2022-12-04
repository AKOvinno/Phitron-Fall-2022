#include<stdio.h>

int have_seven(int n)
{
    for(int i = 1; ;i++) {
        if(n % 10 == 7) {
            return 1;
        }
        n /= 10;
        if(n == 0) {
            break;
        }
    }
    return 0;
}

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int* ptr = ara;
    //traversing the array using pointers
    for(i = 0; i < n; i++) {
        if(have_seven(*(ptr+i)) == 1)
            count++;
    }
    if(n % 2 == 0) {
        if(count >= n/2) {
            printf("Beautiful\n");
        }
        else {
            printf("Ugly\n");
        }
    }
    else {
        if(count >= (n/2)+1) {
            printf("Beautiful\n");
        }
        else {
            printf("Ugly\n");
        }
    }
    return 0;
}
