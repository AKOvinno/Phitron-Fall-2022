#include<stdio.h>

int main()
{
    printf("Enter two strings : \n");
    char a[100];
    gets(a);
    char b[100];
    gets(b);
    int i, j, flag = 0;

    for(i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
        if(a[i] < b[i]) {
            flag = -1;
            break;
        }
        else if(a[i] > b[i]) {
            flag = 1;
            break;
        }
    }
    if ( flag == 1 ) {
        printf("%s will come first\n", b);
    }
    else if ( flag == 0) {
        printf("Both string are equal\n");
    }
    else if (flag == -1) {
        printf("%s will come first\n", a);
    }
    return 0;
}
