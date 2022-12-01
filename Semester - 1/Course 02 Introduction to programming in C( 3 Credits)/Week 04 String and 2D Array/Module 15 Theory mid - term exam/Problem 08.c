#include<stdio.h>
int main()
{
    int i;
    for(i = 0; i < 256; i++) {
        printf("ASCII value = %d for character = %c\n", i, i);
    }
    return 0;
}
