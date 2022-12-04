#include<stdio.h>

int swap(int* p, int* q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int n, i, t;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    scanf("%d", &t);
    while(t--) {
        int index1, index2;
        scanf("%d %d", &index1, &index2);
        swap(&ara[index1-1], &ara[index2-1]);
    }
    for(i = 0; i < n; i++) {
        printf("%d ", ara[i]);
    }
    return 0;
}
