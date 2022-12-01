#include <stdio.h>

int main()
{
    int n, m, i, j;
    char clr;
    int isColored;

    while(scanf("%d %d", &n, &m) != EOF) {
        isColored = 0;

        for(i = 0; i < n; ++i) {
            for(j = 0; j < m; ++j) {
                getchar();
                clr = getchar();

                if(!isColored && clr != 'B' && clr != 'W' && clr != 'G')
                    isColored = 1;
            }
        }

        if(isColored == 1) {
            printf("#Color\n");
        }
        else {
            printf("#Black&White\n");
        }
    }

    return 0;
}
