#include <stdio.h>

int main(){
    int T, n, a[100000], ok;

    scanf("%d", &T);
    while(T--){
        scanf("%d", &n);
        for(int i = 1; i <= n; i++){
            scanf("%d", &a[i]);
        }
        ok = 1;
        for(int i = 1; i <= n; i++){
            if(a[i] % a[1]) ok = 0;
        }
        if(ok)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
