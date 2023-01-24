#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int width, height;

    int calculate_area()
    {
        return height * width;
    }

    int calculate_perimeter()
    {
        return 2 * (height + width);
    }
};

int main()
{
    Rectangle r1;

    r1.height = 4;
    r1.width = 8;

    cout << "Area : " << r1.calculate_area() << endl;
    cout << "Perimeter: " << r1.calculate_perimeter() << endl;

    return 0;
}
