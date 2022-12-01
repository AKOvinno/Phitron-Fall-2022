#include<stdio.h>

int main()
{
    char array[2][2];
    int i, j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            array[i][j] = getchar();
            getchar();
        }
    }
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
