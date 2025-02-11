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

    // Main task of the constructor is that it sets the variables of the class
    // we must setup these variables otherwise the class won't be build.
    // Constructor won't allow to make the class if variables does not set
    Student(string s, int id, int age, string fatherName, string motherName)
    {
        name = s;
        std_id = id;
        age = age;
        fathers_name = fatherName;
        mothers_name = motherName;
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
    Student s2("Sobuj", 1733, 25, "MD. Shahin Ahmed", "Mst. Shahinur Ahmed");

    s.print_information();
    cout << "\n";
    s2.print_information();

    return 0;
}

