#include<stdio.h>

void array_input(int row, int col)
{
    int i, j, k;
    int ara[row][col];
    int ara2[row][col];
    int ara_ans[row][col];
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &ara[i][j]);
        }
    }
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &ara2[i][j]);
        }
    }
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            ara_ans[i][j] = 0;
            for(k = 0; k < col; k++) {
                ara_ans[i][j] += ara[i][k]*ara2[k][j];
            }
        }
    }
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", ara_ans[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    array_input(row, col);
    return 0;
}
