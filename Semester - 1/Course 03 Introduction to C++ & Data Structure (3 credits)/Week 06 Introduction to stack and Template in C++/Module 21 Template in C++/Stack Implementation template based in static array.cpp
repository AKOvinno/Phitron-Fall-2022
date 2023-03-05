#include<bits/stdc++.h>
using namespace std;
// we can't declare in inside class
const int MAX_SIZE = 500;
template <class T>
class Stack
{
public:
    T a[MAX_SIZE];
    int stack_size;
    // Constructor
    Stack()
    {
        stack_size = 0;
    }
    // Add an element in the stack. O(1)
    void push(T val)
    {
        if(stack_size + 1 > MAX_SIZE) {
            cout << "Stack is full!\n";
            return;
        }
        stack_size += 1;
        a[stack_size-1] = val;
    }
    // Delete the top most element from the stack. O(1)
    void pop()
    {
        if(stack_size == 0) {
            cout << "Stack is empty!\n";
            return;
        }
        stack_size -= 1;
    }
    // Returns the top element from the stack. O(1)
    T top()
    {
        if(stack_size == 0) {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return a[stack_size - 1];
    }
};
int main()
{
    Stack <double> st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.8);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    Stack <char> st2;
    st2.push('O');
    st2.push('V');
    st2.push('I');
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    return 0;
}
