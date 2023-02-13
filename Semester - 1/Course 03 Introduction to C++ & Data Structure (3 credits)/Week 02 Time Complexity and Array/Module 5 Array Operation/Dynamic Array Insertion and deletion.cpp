#include<bits/stdc++.h>
using namespace std;

// Memory complexity of the whole class is O(n)
class Array
{
private:
    int *arr;
    int cap;
    int sz;
    // Array size increasing
    void Increase_size()
    {
        cap *= 2;
        int *tmp = new int[cap];
        for(int i = 0; i < sz; i++) {
            tmp[i] = arr[i];
        }
        // here we are deleting the previous memory
        // we are avoiding memory leak here
        delete [] arr;
        arr = tmp;
    }
    // Decreasing the capacity
    // if too much element is removed
    void Decrease_size()
    {
        if(sz <= cap/2) {
            cap /= 2;
        }
    }
public:
    Array()
    {
        arr = new int[1];
        cap = 1;
        sz = 0;
    }
    // push back array element
    // Time complexity O( n log n )
    // if(capacity != size ) then O(1) for pushing one
    void Push_back(int x)
    {
        if(cap == sz) {
            Increase_size();
        }
        arr[sz] = x;
        sz++;
    }
    // Erase element at any index O(size)
    void Erase(int pos)
    {

        if(pos >= sz) {
            cout << "Position doesn't exist.\n";
        }
        for(int i = pos; i < sz; i++) {
            arr[i-1] = arr[i];
        }
        sz--;
        Decrease_size();
    }
    // Inserting element at any index O(size)
    void Insert(int pos, int x)
    {
        if(cap == sz) {
            Increase_size();
        }
        for(int i = sz-1; i >= pos-1; i--) {
            arr[i+1] = arr[i];
        }
        arr[pos-1] = x;
        sz++;
    }
    //printing array element O(size)
    void Print()
    {
        for(int i = 0; i < sz; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    // return the current size of array O(1)
    int getSize()
    {
        return sz;
    }
    // return the element of desired index O(1)
    int getElement(int idx)
    {
        if(idx >= sz)
        {
            cout << "Error index " << idx << " is out of bound!\n";
            return -1;
        }
        return arr[idx];
    }
    // deletes the last element at O(1)
    void Pop_back()
    {
        if(sz == 0) {
            cout << "Current size is zero\n";
            return;
        }
        sz--;
    }
    // accessing the capacity value in private class
    void setCapacity(int cap)
    {
        this -> cap = cap;
    }
    // printing capacity of the array
    void Print_Capacity()
    {
        cout << "Capacity = " << cap << endl;
    }
};

int  main()
{
    Array a;

    a.Push_back(10);
    a.Push_back(20);
    a.Push_back(30);
    a.Push_back(40);
    a.Push_back(50);
    a.Push_back(60);
    a.Push_back(70);
    a.Push_back(80);
    a.Push_back(90);
    a.Push_back(100);
    a.Print();

    a.Insert(1, 5);
    a.Print();

    a.Erase(1);
    a.Print();

    a.Pop_back();
    a.Print();

    cout << "Array Size: " << a.getSize() << "\n";

    for(int i = 0; i < a.getSize(); i++) {
        cout << a.getElement(i) << "\n";
    }

    a.getElement(10);
    a.Print_Capacity();

    return 0;
}
