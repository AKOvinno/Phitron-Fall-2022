#include<stdio.h>
int main()
{
    int t, i;
    scanf("%d", &t);
    while(t--)
    {
        int k, m, s1 = 0, s2 = 0, x;
        scanf("%d", &k);
        int ara[k];
        for(i = 0; i < k; i++)
        {
            scanf("%d", &ara[i]);
            if(ara[i] > s1)
                s1 = ara[i];
        }
        scanf("%d", &m);
        int ara2[m];
        for(i = 0; i < m; i++)
        {
            scanf("%d", &ara2[i]);
            if(ara2[i] > s2)
                s2 = ara2[i];
        }
        if(s1 > s2)
            printf("Alice\nAlice\n");
        else if(s2 > s1)
            printf("Bob\nBob\n");
        else
            printf("Alice\nBob\n");
    }
    return 0;
}
