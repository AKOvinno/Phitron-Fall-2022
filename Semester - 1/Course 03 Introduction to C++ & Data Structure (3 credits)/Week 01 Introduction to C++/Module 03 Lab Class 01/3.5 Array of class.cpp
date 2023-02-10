#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    Student()
    {

    }
    Student(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }
    void print_information()
    {
        cout << "Name: " << name << "\n";
        cout << "Student ID: " << std_id << "\n";
        cout << "Age: " << age << "\n";
    }
};

int main()
{
    Student s[10];
    for(int i = 0; i < 10; i++) {
        s[i] = Student("Ovinno", i+1, 25);
    }
    for(int i = 0; i < 10; i++) {
        s[i].print_information();
        cout << "\n";
    }
    return 0;
}


