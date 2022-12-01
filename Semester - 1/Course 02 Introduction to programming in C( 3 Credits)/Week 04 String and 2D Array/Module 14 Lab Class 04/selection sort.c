#include<stdio.h>

int main()
{
    int N = 8, i, j;
    int ara[8] = {12, 7, 9, 3, 15, 2, 6, 5};
    int sorted_ara[8];

    for(i = 0; i < N; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    int min, m_ind;

    for(j = 0; j < N; j++)
    {
        min = ara[0];
        m_ind = 0;

        for(i = 0; i < N; i++)
        {
            if(ara[i] < min)
            {
                min = ara[i];
                m_ind = i;
            }
        }
        sorted_ara[j] = min;
        ara[m_ind] = 9999;

        for(i = 0; i < N; i++)
        {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }

    for(i = 0; i < N; i++) {
        printf("%d ", sorted_ara[i]);
    }
    printf("\n");

    return 0;
}
