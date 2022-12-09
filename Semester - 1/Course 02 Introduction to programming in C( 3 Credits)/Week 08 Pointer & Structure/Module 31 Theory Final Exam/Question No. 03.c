//pass by value

#include<stdio.h>
int fun(int x, int y)
{
    x = 5;
    y = 10;
}
int main()
{
    int x = 10, y = 5;
    fun(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

// pass by references

#include<stdio.h>
int fun(int* ptr1, int* ptr2)
{
    *ptr1 = 5;
    *ptr2 = 10;
}
int main()
{
    int x = 10, y = 5;
    fun(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
