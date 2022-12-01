#include<stdio.h>

int main()
{
    int M, N, area;
    scanf("%d %d", &M, &N);
    area = M*N;
    if(area % 2 == 0) {
        printf("%d\n", area/2);
    }
    else {
        area = area - (area % 2);
        printf("%d\n", area/2);
    }
    return 0;
}
