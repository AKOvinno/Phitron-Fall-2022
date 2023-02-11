#include<bits/stdc++.h>
using namespace std;

class Cuboid
{
private:
    int length, width, height;
public:
    //empty constructor that takes nothing as input and initializes length, width and height as 0
    Cuboid()
    {
        length = 0;
        width = 0;
        height = 0;
    }
    //constructor takes 3 values as input and initializes length, width and height as the given values.
    Cuboid(int length, int width, int height)
    {
        this -> length = length;
        this -> width = width;
        this -> height = height;
    }
    //public function named ‘getVolume’ that calculates the volume of the Cuboid and returns the desired Volume.
    int getVolume()
    {
        return length * width * height;
    }
    //public function named ‘getSurfaceArea’ that calculates the surface area of the Cuboid and returns the desired value.
    int getSurfaceArea()
    {
        return 2 * length * width + 2 * length * height + 2 * height * width;
    }
    void print_information()
    {
        cout << "Length: " << length << "\n";
        cout << "Width: " << width << "\n";
        cout << "Height: " << height << "\n";
    }
};
bool comp_by_Volume(Cuboid a, Cuboid b)
{
    return a.getVolume() < b.getVolume();
}
bool comp_by_SurfaceArea(Cuboid a, Cuboid b)
{
    return a.getSurfaceArea() < b.getSurfaceArea();
}
int main()
{
    int num;
    cout << "Number of objects: ";
    cin >> num;
    vector<Cuboid>ara;
    for(int i = 0; i < num; i++) {
        ara.push_back(Cuboid(rand()%100, rand()%100, rand()%100));
    }

    for(int i = 0; i < num; i++) {
        ara[i].print_information();
        cout << "Volume: " << ara[i].getVolume() << endl;
        cout << "Surface Area: " << ara[i].getSurfaceArea() << endl;
        cout << "\n";
    }

    cout << "Sorting the array of class by Volume: \n\n";
    sort(ara.begin(), ara.end(), comp_by_Volume);

    for(int i = 0; i < num; i++) {
        ara[i].print_information();
        cout << "Volume: " << ara[i].getVolume() << endl;
        cout << "Surface Area: " << ara[i].getSurfaceArea() << endl;
        cout << "\n";
    }

    cout << "Sorting the array of class by Surface Area: \n\n";
    sort(ara.begin(), ara.end(), comp_by_SurfaceArea);
    for(int i = 0; i < num; i++) {
        ara[i].print_information();
        cout << "Volume: " << ara[i].getVolume() << endl;
        cout << "Surface Area: " << ara[i].getSurfaceArea() << endl;
        cout << "\n";
    }
    return 0;
}
