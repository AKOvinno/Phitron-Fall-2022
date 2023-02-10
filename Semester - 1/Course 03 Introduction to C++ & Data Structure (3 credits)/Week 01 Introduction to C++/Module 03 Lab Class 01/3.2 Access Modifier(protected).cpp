#include<bits/stdc++.h>
using namespace std;

class User
{
protected:
    string name;
    int age;
};
class Admin: User // admin inheriting user class
{
private:
    string designation;
public:
    void Set(string s, int ag, string dg) // setting the admin class properties
    {
        name = s;
        age = ag;
        designation = dg;
    }
    void print() // printing the properties
    {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Designation: " << designation << "\n";
    }
};
int main()
{
    Admin ad;
    ad.Set("Rois Uddin", 70, "Additional Secretary");
    ad.print();
    return 0;
}
