#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream of;
    of.open("1.txt");

    ofstream of2;
    of2.open("2.txt");

    of << "Hello world\n";
    of2 << "Hello OF2\n";

    of.close();
    of2.close();

    return 0;
}
