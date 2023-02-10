#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    Person *father, *mother;
    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Father's Name: " << father->name << "\n";
        cout << "Mother's Name: " << mother->name << "\n";
    }
};
int main()
{
    Person p;
    p.father = new Person;
    p.mother = new Person;

    p.name = "Ovinno";
    p.father->name = "MD. Sirajul Haque";
    p.mother->name = "Kamrun Naher Lily";

    p.print_info();

    return 0;
}

