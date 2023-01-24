#include<bits/stdc++.h>
using namespace std;

class User
{
protected:
    string name;
    int age;
};
class Admin : User // Admin inheriting user class
{
private:
    string designation;
public:
    void Set(string s, int ag, string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }
    void print()
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Designation: " << designation << "\n";
    }
};

int main()
{
    Admin ad;
    ad.Set("Rois Uddin", 65, "Additional Secretary");
    ad.print();
    return 0;
}
