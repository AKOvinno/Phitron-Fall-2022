#include<stdio.h>
#include<math.h>

struct Point {
    float x;
    float y;
    };

/*int manhattan(struct Point p1, struct Point p2)
{
    int res = abs(p1.x - p2.x) + abs(p1.y - p2.y);
    return res;
}*/
struct Point mid(struct Point m, struct Point n)
{
    struct Point ans;
    ans.x = (m.x+n.x)/2;
    ans.y = (m.y+n.y)/2;
    return ans;
};
int main()
{
    struct Point p1;
    scanf("(%f, %f)\n", &p1.x, &p1.y);
    struct Point p2;
    scanf("(%f, %f)", &p2.x, &p2.y);

    struct Point p3;
    p3 = mid(p1, p2);

     printf("%.2f, %.2f\n", p3.x, p3.y);
     return 0;
}
