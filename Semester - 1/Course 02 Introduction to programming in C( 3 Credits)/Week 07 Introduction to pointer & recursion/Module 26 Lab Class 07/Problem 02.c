#include<stdio.h>

void find_max_min(int n, int nums[], int* p, int* q)
{
    *p = nums[0];
    *q = nums[0];
    int i;
    for(i = 0; i < n; i++) {
        if(nums[i] > *p) {
            *p = nums[i];
        }
        if(nums[i] < *q) {
            *q = nums[i];
        }
    }
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    int maxx, minn;
    find_max_min(n, ara, &maxx, &minn);
    printf("Max = %d\nMin = %d\n", maxx, minn);
    return 0;
}
