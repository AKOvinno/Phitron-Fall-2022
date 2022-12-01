#include<stdio.h>
int main()
{
    int ara[3][3];
    int i, j, magic_num, sum, flag = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &ara[i][j]);
        }
    }

    for(i = 0, j = 0; j < 3; j++) {
        sum += ara[i][j];
    }
    magic_num = sum;

    for(i = 0; i < 3; i++) {
        sum = 0;
        for(j = 0; j < 3; j++) {
            sum += ara[i][j];
        }
        if(magic_num != sum) {
            flag = 1;
            break;
        }
    }

    for(j = 0; j < 3; j++) {
        sum = 0;
        for(i = 0; i < 3; i++) {
            sum += ara[i][j];
        }
        if(magic_num != sum) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }

    return 0;
}
