#include<stdio.h>

struct Point
{
    float x;
    float y;
};
struct Triangle
{
    struct Point A;
    struct Point B;
    struct Point C;
};
struct Point centroid(struct Triangle t)
{
    struct Point ans;
    ans.x = (t.A.x+t.B.x+t.C.x)/3;
    ans.y = (t.A.y+t.B.y+t.C.y)/3;
    return ans;
};
int main()
{
    struct Point p1 = {1, 1};
    struct Point p2 = {4, 5};
    struct Point p3 = {1, 5};

    struct Triangle t = {p1, p2, p3};

    // measure centroid

    struct Point c = centroid(t);
    printf("The centroid is (%f, %f)\n", c.x, c.y);
}
