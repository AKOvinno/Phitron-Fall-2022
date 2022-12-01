#include<stdio.h>
void draw()
{
    char arg[6], bra[6];
    int ar = 0, br = 0;
    scanf("%s", arg);
    scanf("%s", bra);
    for(int i = 0; i < 6; i++) {
        if(arg[i] > '0')
            ar++;
        if(bra[i] > '0')
            br++;
    }
    if(ar > br)
        printf("Argentina\n");
    else if(br > ar)
        printf("Brazil\n");
    else
        draw();
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("Argentina\n");
    else if(a < b)
        printf("Brazil\n");
    else
        draw();
    return 0;
}
