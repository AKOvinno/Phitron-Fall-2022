#include<stdio.h>

int main()
{
    int row = 8, col = 8, i, j;

    int chess[row][col];

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            chess[i][j] = 0;
        }
    }
    int input_num;
    scanf("%d", &input_num);

    while(input_num--) {
        int r, c;
        scanf("%d %d", &r, &c);
        chess[r][c] = 1;
    }
    for(i = 0; i < row; i++) {
        int count = 0;
        for(j = 0; j < col; j++) {
            if(chess[i][j] == 1) {
                count++;
            }
        }
        if(count > 1) {
            for(j = 0; j < col; j++) {
                chess[i][j] = 0;
            }
        }
    }
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if(chess[i][j] != 0) {
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}
