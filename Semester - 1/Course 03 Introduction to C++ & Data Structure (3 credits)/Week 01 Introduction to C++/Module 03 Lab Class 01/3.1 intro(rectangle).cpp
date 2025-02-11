#include<bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    int width, height;
    // area calculation
    int calculate_area()
    {
        return height * width;
    }
    // perimeter calculation
    int calculate_perimeter()
    {
        return 2 * (height + width);
    }
};
int main()
{
    Rectangle r1 = {8, 4}, r2 = {9, 3};
    cout << "Area: " << r1.calculate_area() << "\n";
    cout << "Perimeter: " << r1.calculate_perimeter() << "\n";
    cout << "Area: " << r2.calculate_area() << "\n";
    cout << "Perimeter: " << r2.calculate_perimeter() << "\n";
    return 0;
}
