#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t) {
        int N, i, H = 0, T = 0;
        char ch;

        scanf("%d", &N);
        getchar();
        for(i = 0; i < N; i++) {
            scanf("%c", &ch);
            if(ch == 'H') {
                H++;
            }
            else {
                T++;
            }
        }
        if(H > T) {
            printf("England\n");
        }
        else if(H < T){
            printf("Pakistan\n");
        }
        t--;
    }
    return 0;
}
