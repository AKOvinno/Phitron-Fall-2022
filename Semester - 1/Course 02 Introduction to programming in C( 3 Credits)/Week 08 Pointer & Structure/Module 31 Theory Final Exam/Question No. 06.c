//Functions with no arguments and no return value

#include<stdio.h>

void print_some()
{
    printf("Phitron\n");
}

int main()
{
    print_some();
    return 0;
}

//Functions with no arguments and return value
#include<stdio.h>

int return_some()
{
    return 1;
}

int main()
{
    printf("%d\n", return_some());
    return 0;
}
//Function with arguments and a return value
#include<stdio.h>
int print_input(int n, int m)
{
    if(n > m)
        return n;
    else
        return m;

}
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("Maximum = %d\n", print_input(n, m));
    return 0;
}
//Function with arguments and no return value:
#include<stdio.h>
int print_input(int n)
{
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    print_input(n);
    return 0;
}
