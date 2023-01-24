#include<bits/stdc++.h>
using namespace std;

class person
{
public:
    string name;
    person *father, *mother;

    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Father's Name: " << father->name << "\n";
        cout << "Mother's Name: " << mother->name << "\n";
    }
};

int main()
{
    person p;

    p.father = new person;
    p.mother = new person;

    p.name = "Ovinno";
    p.father->name = "Md. Sirajul Haque";
    p.mother->name = "Kamrun Naher Lily";

    p.print_info();

    delete p.father;
    delete p.mother;
    return 0;
}
