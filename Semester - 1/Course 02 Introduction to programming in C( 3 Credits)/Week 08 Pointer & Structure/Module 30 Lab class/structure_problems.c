#include<stdio.h>
#include<math.h>

struct Point {
    int x;
    int y;
    };

int manhattan(struct Point p1, struct Point p2)
{
    int res = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return res;
}
int main()
{
    struct Point p1;
    scanf("(%d, %d)\n", &p1.x, &p1.y);
    struct Point p2;
    scanf("(%d, %d)", &p2.x, &p2.y);
     int ans = manhattan(p1, p2);
     printf("Manhattan distance is %d\n", ans);
     return 0;
}
