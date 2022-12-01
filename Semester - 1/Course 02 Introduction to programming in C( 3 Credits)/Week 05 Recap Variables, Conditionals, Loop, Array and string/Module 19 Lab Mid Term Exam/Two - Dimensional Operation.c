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
            if(ara[i][j] == i+1 && ara[i][j] == j+1) {
                ara[i][j] += 3;
            }
            else if(ara[i][j] == i+1 && ara[i][j] != j+1) {
                ara[i][j] += 2;
            }
            else if(ara[i][j] == j+1 && ara[i][j] != i+1) {
                ara[i][j] += 1;
            }
        }
    }
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", ara[i][j]);
        }
        printf("\n");
    }
}
