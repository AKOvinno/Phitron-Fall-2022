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

    Student(string name, int std_id, int age)
    {
        this -> name = name;
        this -> std_id = std_id;
        this -> age = age;
    }

    void print_information()
    {
        cout << "Name: " << name << "\n";
        cout << "Student ID: " << std_id << "\n";
        cout << "Age: " << age << "\n";
        cout << "Father's Name: " << fathers_name << "\n";
        cout << "Mother's Name: " << mothers_name << "\n";
    }
};

int main()
{
    Student *s = new Student("Ovinno", 1713, 25);
    s -> print_information();
    (*s).print_information();
    return 0;
}

