#include<stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ara[row][col];
    int i, j;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &ara[i][j]);
        }
    }
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d\t", ara[i][j]);
        }
        printf("\n");
    }
    return 0;
}
