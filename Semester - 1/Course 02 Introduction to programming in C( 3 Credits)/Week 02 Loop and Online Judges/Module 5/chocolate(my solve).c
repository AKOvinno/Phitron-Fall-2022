#include<stdio.h>
int main()
{
    int N, packet, total;
    scanf("%d", &N);
    packet = N;
    total = N;
    while(packet >= 4) {
        total+=(packet/4);
        packet = (packet/4) + (packet%4);
    }
    printf("%d\n", total);
    return 0;
}
