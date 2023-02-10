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

    // Constructor
    Student(string name, int id, int age, string fatherName, string motherName)
    {
        this -> name = name;
        std_id = id;
        this -> age = age;
        fathers_name = fatherName;
        mothers_name = motherName;
    }
    // Constructor overloading
    Student(string name, int id, int age)
    {
        this -> name = name;
        std_id = id;
        this -> age = age;
    }
    // Empty Constructor
    Student()
    {

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
    Student s("Ovinno", 1713, 25, "MD. Sirajul Haque", "Kamrun Naher Lily");
    s.print_information();

    cout << "\n";

    Student s2("Sobuj", 1733, 25);
    s2.print_information();

    cout << "\n";

    Student s3;
    s3.print_information();

    return 0;
}


