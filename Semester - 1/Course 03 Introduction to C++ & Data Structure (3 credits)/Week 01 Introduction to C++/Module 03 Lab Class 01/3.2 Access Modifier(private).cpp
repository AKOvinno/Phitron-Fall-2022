#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
public:
    void print_information()
    {
        cout << "Name: " << name << "\n";
        cout << "Student ID: " << std_id << "\n";
        cout << "Age: " << age << "\n";
        cout << "Father's Name: " << fathers_name << "\n";
        cout << "Mother's Name: " << mothers_name << "\n";
    }
    // setting information to access private properties
    void setInformation(string s, int id, int age, string fatherName, string motherName)
    {
        name = s;
        std_id = id;
        age = age;
        fathers_name = fatherName;
        mothers_name = motherName;
    }
};

int main()
{
    Student s, s2;

    s.setInformation("Ovinno", 1713, 25, "MD. Sirajul Haque", "Kamrun Naher Lily");
    s2.setInformation("Sobuj", 1733, 25, "MD. Shahin Ahmed", "Mst. Shahinur Ahmed");

    s.print_information();
    cout << "\n";
    s2.print_information();
    return 0;
}
