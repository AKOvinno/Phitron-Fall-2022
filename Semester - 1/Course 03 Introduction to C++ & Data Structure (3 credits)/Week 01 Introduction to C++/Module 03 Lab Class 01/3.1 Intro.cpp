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

    void print_information()
    {
        cout << "Name: " << name  << "\nID: " << std_id << "\nAge: " << age << "\nFather's name: " << fathers_name << "\nMother's name: " << mothers_name << endl;
    }
};

int main()
{
     student s1, s2;

     s1.name = "Ovinno";
     s1.std_id = 1713;
     s1.age = 25;
     s1.fathers_name = "Md. Sirajul Haque";
     s1.mothers_name = "Kamrun Naher Lily";

     s2.name = "Sobuj";
     s2.std_id = 1733;
     s2.age = 25;
     s2.fathers_name = "Alamgir Hossain";
     s2.mothers_name = "Rownak Ara Chowdhury";

     s1.print_information();
     cout << endl;
     s2.print_information();

    return 0;
}
