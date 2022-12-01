#include<stdio.h>

int main()
{
    int array[15];
    int i, j;

    //initializing array for the required progressino
    for(i = 0, j = 1; i < 15; i++, j*=2) {
        array[i] = j;
    }

    //initializing array for printing array elements
    for(i = 0; i < 15; i++) {
        printf("%d, ", array[i]);
    }
    return 0;
}
