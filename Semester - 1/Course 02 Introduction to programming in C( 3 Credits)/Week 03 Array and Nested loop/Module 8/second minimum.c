#include<stdio.h>

int main()
{
    int N = 6;
    int ara[N];
    int i;

    for(i = 0; i < N; i++) {
        scanf("%d", &ara[i]);
    }

    int m = ara[0];
    for(i = 0; i < N; i++) {
        if(m > ara[i]){
            m = ara[i];
        }
    }
    int min_index;
    for(i = 0; i < N; i++) {
        if(m == ara[i]) {
            min_index = i;
        }
    }
    int s_min;
    if(min_index == 0) {
        s_min = ara[1];
    }
    else {
        s_min = ara[0];
    }
    for(i = 0; i < N; i++) {
        if(i == min_index) {
            continue;
        }
        if(s_min > ara[i]) {
            s_min = ara[i];
        }
    }
    printf("The second minimum value is %d\n", s_min);

    return 0;
}
