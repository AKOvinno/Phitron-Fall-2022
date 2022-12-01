#include<stdio.h>

int main()
{
    int N, M, i;
    scanf("%d %d", &N, &M);
    for(i = N; i != M ; i++) {
        if(i == 24) {
            i = 0;
            if(i == M) {
                break;
            }
        }
        printf("%d ", i);
    }
    printf("%d", M);
    return 0;
}
