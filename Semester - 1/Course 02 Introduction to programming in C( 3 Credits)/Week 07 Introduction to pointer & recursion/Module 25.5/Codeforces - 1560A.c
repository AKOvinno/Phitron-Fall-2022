#include<stdio.h>

int finding_dislikes(int num)
{
    if(num % 3 == 0)
        return 1;
    else if(num % 10 == 3)
        return 1;
    else
        return 0;
}

int main()
{
    int t, i;
    scanf("%d", &t);
    while(t) {
        int k, index = 0;
        scanf("%d", &k);
        for(i = 1; ; i++) {
            if(finding_dislikes(i))
                continue;
            index++;
            if(k == index)
                break;
        }
        printf("%d\n", i);
        t--;
    }
    return 0;
}
