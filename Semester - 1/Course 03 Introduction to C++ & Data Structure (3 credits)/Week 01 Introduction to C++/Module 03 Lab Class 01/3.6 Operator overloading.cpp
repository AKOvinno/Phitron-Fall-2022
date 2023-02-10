#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    Student()
    {

    }
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
    }
    bool operator < (Student s)
    {
        return std_id < s.std_id;
    }
};
int main()
{
    vector <Student>a;
    for(int i = 0; i < 10; i++) {
        a.push_back(Student("Ovinno", 20-i+1, 25));
    }

    for(int i = 0; i < 10; i++) {
        a[i].print_information();
        cout << "\n";
    }

    cout << "After sorting the array of class:\n\n";
    sort(a.begin(), a.end());
    for(int i = 0; i < 10; i++) {
        a[i].print_information();
        cout << "\n";
    }
    return 0;
}
