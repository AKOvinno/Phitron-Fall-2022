#include<stdio.h>
#include<math.h>
void solve()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%f\n", pow(a, b));
}
int main()
{
      int t, i;
      scanf("%d", &t);
      for(i = 0; i < t; i++)
      {
          solve();
      }
      return 0;
}
