#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    // We will be declaring a pointer because it will point a single location
    // If we don't use pointer it will be an infinite loop
    // Every person definitely have father and mother and it will direct an infinite loop
    Person *father, *mother;
    void print_info()
    {
        cout << "Name: " << name << "\n";
        // We will be using -> sign because we are accessing pointer
        cout << "Father's Name: " << father->name << "\n";
        cout << "Mother's Name: " << mother->name << "\n";
    }
};
int main()
{
    Person p;
    // We declared Person class which has two pointer member
    // These pointer need location to point otherwise program will crash
    p.father = new Person;
    p.mother = new Person;

    p.name = "Ovinno";
    p.father->name = "MD. Sirajul Haque";
    p.mother->name = "Kamrun Naher Lily";

    p.print_info();

    return 0;
}

