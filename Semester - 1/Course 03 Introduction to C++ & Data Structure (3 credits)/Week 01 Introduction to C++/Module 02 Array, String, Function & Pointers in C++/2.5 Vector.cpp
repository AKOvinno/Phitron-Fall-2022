#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, num;
    cin >> n;
    vector <int> a;

    // pushing number to the vector
    for(i = 0; i < n; i++) {
        cin >> num;
        a.push_back(num);
    }

    int number, index;
    cout << "Index no. you want to insert: ";
    cin >> index;
    cout << "Number you want to insert: ";
    cin >> number;
    //insertion in the vector
    a.insert(a.begin() + index-1, number);

    cout << "After Insertion: " << "\n";
    for(i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    cout << "\nIndex no. you want to delete: ";
    cin >> index;

    //deletion in the vector
    a.erase(a.begin() + index-1);

    // deletion the last element
   // a.pop_back();

    cout << "After Deletion: ";
    for(i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << "\n";

    //resizing vector
    cout << "Enter the size of the vector: ";
    int size_of_vector;
    cin >> size_of_vector;
    a.resize(size_of_vector);

    // after resizing vector
    cout << "The size of the vector is: " << a.size() << endl;
    for(i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    int startx, endx;
    cout << "\nSort starting index: ";
    cin >> startx;
    cout << "Sort ending index: ";
    cin >> endx;
    cout << "Sorting the vector: " << endl;
    sort(a.begin() + startx-1, a.begin() + endx);

//    sort(a.begin(), a.end()); // This is full sort code

    for(i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}
