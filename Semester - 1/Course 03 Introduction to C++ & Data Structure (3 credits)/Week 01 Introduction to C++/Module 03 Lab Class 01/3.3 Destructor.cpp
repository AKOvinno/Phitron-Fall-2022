#include<bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    Person *father, *mother;
    Person()
    {
        father = NULL;
        mother = NULL;
    }
    Person(string name, string fatherName, string motherName)
    {
        this -> name = name;

        father = new Person;
        father -> name = fatherName;

        mother = new Person;
        mother -> name = motherName;
    }
    void print_info()
    {
        cout << "Name: " << name << "\n";
        cout << "Father's Name: " << father->name << "\n";
        cout << "Mother's Name: " << mother->name << "\n";
    }
    ~Person()
    {
        cout << "Called\n";
        if(father != NULL)
            delete father;
        if(mother != NULL)
            delete mother;
    }
};
int main()
{
    Person p("Ovinno", "MD. Sirajul Haque", "Kamrun Naher Lily");
    p.print_info();

    return 0;
}

