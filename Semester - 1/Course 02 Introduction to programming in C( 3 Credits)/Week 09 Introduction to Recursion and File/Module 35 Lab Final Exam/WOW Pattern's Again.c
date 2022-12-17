#include <stdio.h>
int main() {
   int i, space, n, k = 0;
   scanf("%d", &n);
   for (i = 1; i <= n; ++i, k = 0) {
      for (space = 1; space <= n - i; ++space) {
         printf(" ");
      }
        while(k != 2 * i - 1) {
            if(i % 2 == 0) {
                printf("*");
                ++k;
            }
            else {
                printf("^");
                ++k;
            }
      }
      printf("\n");
   }
   return 0;
}
