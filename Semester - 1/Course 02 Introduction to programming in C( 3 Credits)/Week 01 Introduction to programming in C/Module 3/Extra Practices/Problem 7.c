#include<stdio.h>

int main()
{
    int height;
    scanf("%d", &height);
    if(height < 150) {
        printf("The person is a Dwarf.\n");
    }
    else if(height >= 150 && height < 165) {
        printf("The person is Average height.\n");
    }
    else {
        printf("The person is Tall.\n");
    }
    return 0;
}
