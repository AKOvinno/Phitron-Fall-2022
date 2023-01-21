#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("0.txt");

    int x;
    double y, z;
    ifs >> x >> y >> z;

    cout << x << " " << y << " " << z << endl;

    ifs.close();

    return 0;
}
