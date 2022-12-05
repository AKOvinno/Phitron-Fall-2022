#include<stdio.h>
#include<limits.h>
int main()
{
     int a[8] = {5, 4, 5, 7, 2, 1, 4, 2};

     int max = INT_MIN;

     for(int i = 0; i < 8; i++) {
        if(a[i] > max)
            max = a[i];
     }
     int freq[max+1];

     for(int i = 0; i <= max; i++) {
        freq[i] = 0;
     }
     for(int i = 0; i < 8; i++) {
        freq[a[i]]++;
     }
     for(int i = 0; i <= max; i++) {
        /*if(freq[i] != 0) {
            printf("index = %d value = %d\n", i, freq[i]);
        }
        if(freq[i] != 0)
            printf("%d ", i);*/
        if(freq[i] != 0) {
            for(int j = 1; j <= freq[i]; j++) {
                printf("%d ", i);
            }
        }
     }
}
