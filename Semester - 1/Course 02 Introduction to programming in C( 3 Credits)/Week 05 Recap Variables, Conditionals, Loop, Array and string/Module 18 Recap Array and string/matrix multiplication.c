#include<stdio.h>

int main()
{
    int n, i, j, k, result = 0;
    scanf("%d", &n);
    int mat1[n][n], mat2[n][n], ans_mat[n][n];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            ans_mat[i][j] = 0;
        }
    }

    printf("Enter the elements of first matrix: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            for(k = 0; k < n; k++) {
                ans_mat[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("The product of the two given matrices is: \n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", ans_mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
