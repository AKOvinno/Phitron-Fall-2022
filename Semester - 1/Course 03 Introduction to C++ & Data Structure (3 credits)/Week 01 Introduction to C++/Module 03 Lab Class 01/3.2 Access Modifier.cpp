#include<bits/stdc++.h>
using namespace std;

class student
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
        cout << "Name: " << name  << "\nID: " << std_id << "\nAge: " << age << "\nFather's name: " << fathers_name << "\nMother's name: " << mothers_name << endl;
    }
    void setInformation(string s, int id, int ag, string f_name, string m_name)
    {
        name = s;
        std_id = id;
        age = ag;
        fathers_name = f_name;
        mothers_name = m_name;
    }
};

int main()
{
     student s1, s2;

//     s1.name = "Ovinno";
//     s1.std_id = 1713;
//     s1.age = 25;
//     s1.fathers_name = "Md. Sirajul Haque";
//     s1.mothers_name = "Kamrun Naher Lily";
//
//     s2.name = "Sobuj";
//     s2.std_id = 1733;
//     s2.age = 25;
//     s2.fathers_name = "Alamgir Hossain";
//     s2.mothers_name = "Rownak Ara Chowdhury";

    s1.setInformation("Ovinno", 1713, 25, "Md. Sirajul Haque", "Kamrun Naher Lily");
    s2.setInformation("Sobuj", 1733, 25, "Alamgir Hossia", "Rownak Ara Chowdhury");

     s1.print_information();
     cout << endl;
     s2.print_information();

    return 0;
}

