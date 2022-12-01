#include<stdio.h>

int main()
{
    int N, move = 0;
    scanf("%d", &N);
    for(int i = N; i >= 0; ) {
        if(N <= 5) {
            move++;
            break;
        }
        else {
            N = N - 5;
            move++;
        }
    }
    printf("%d\n", move);
    return 0;
}
