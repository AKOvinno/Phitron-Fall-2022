#include<stdio.h>

int main()
{
    int t, i, j, a, b, count = 0, safe = 0;
    scanf("%d", &t);
    int ara[8][8];

    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            ara[i][j] = 0;
        }
    }
    //taking inputs
    while(t) {
        scanf("%d %d", &a, &b);
        ara[a-1][b-1] = 1;
        t--;
    }
    //checking rows for two rocks
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            count += ara[i][j];
        }
        if(count == 2) {
            for(j = 0; j < 8; j++) {
                ara[i][j] = 0;
            }
        }
        count = 0;
    }
    printf("\n");
    //checking columns for two rocks
    for(j = 0; j < 8; j++) {
        for(i = 0; i < 8; i++) {
            count += ara[i][j];
        }
        if(count == 2) {
            for(i = 0; i < 8; i++) {
                ara[i][j] = 0;
            }
        }
        count = 0;
    }
    //counting number of safe rooks
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            if(ara[i][j] == 1) {
                safe++;
            }
        }
    }
    printf("Safe rooks - %d\n", safe);
    for(i = 0; i < 8; i++) {
        for(j = 0; j < 8; j++) {
            if(ara[i][j] == 1) {
                printf("%d %d\n", i+1, j+1);
            }
        }
    }
    return 0;
}
