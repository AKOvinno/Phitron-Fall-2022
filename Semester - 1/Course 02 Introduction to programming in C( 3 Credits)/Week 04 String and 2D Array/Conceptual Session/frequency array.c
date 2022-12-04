#include<stdio.h>
#include<string.h>

int main()
{
     char s[1000];
     scanf("%s", s);
     int i, j, count = 0, n = strlen(s), largestElement = 26;
     int freq[largestElement+1];
     for(i = 0; i <= largestElement; i++) {
         freq[i] = 0;
      }
     for(i = 0; i < n; i++) {
        freq[(s[i] - 'a')+1]++;
     }
     for(i = 0; i < n; i++) {
        if(freq[i] > 0) {
            count++;
        }
     }
     int nxt = 0;
     while(nxt != count)
     {
         int max = -1, index = -1;
         char ch;
         for(int i = 1; i <= 26; i++) {
            if(freq[i] > max) {
                max = freq[i];
                ch = i +96;
                index = i;
            }
         }
         //printf("Next greatest value - %d\n", max);
         //printf("Character - %c \n\n", ch);
         for(int i = 1; i <= max; i++) {
            printf("%c", ch);
         }
         freq[index] = 0;
         nxt++;
     }
     return 0;
}
