#include<bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    student ()
    {
        // empty constructor for constructor overloading purpose
    }
    student (string name, int std_id, int age, string fathers_name, string mothers_name) // it's called constructor. It sets the variables of the class
    {
        this->name = name;  // name from class accessing name from parameter using this
        this->std_id = std_id;
        this->age = age;
        this->fathers_name = fathers_name;
        this->mothers_name = mothers_name;
    }
    student(string s, int id, int ag) // Constructor overloading
    {
        name = s;
        std_id = id;
        age = ag;
    }

    void print_information()
    {
        cout << "Name: " << name  << "\nID: " << std_id << "\nAge: " << age << "\nFather's name: " << fathers_name << "\nMother's name: " << mothers_name << endl;
        cout << endl;
    }
    ~student() // This is a destructor which is needed (when we allocate memory from heap using new) for deleting the memory we allocated to free it or deallocate it
    {
        cout << "Destructor Called\n";
        print_information();
    }
};

int main()
{
    student s1 ("Ovinno", 1713, 25, "Md. Sirajul Haque", "Kamrun Naher Lily");
    student s2 ("Sobuj", 1733, 25);

    s1.print_information();
    s2.print_information();

    student s3;
    s3.print_information();

    return 0;
}

