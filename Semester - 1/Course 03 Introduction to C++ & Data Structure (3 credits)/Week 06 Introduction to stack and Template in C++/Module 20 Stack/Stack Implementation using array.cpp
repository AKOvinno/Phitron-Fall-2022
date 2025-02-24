#include<bits/stdc++.h>
using namespace std;
// we can't declare it inside class
const int MAX_SIZE = 500;
// stack using static array
class Stack
{
public:
    int a[MAX_SIZE];
    int stack_size;
    // Constructor
    Stack()
    {
        stack_size = 0;
    }
    // Add an element in the stack. O(1)
    void push(int val)
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
        a[stack_size - 1] = 0;
        stack_size -= 1;
    }
    // Returns the top element from the stack. O(1)
    int top()
    {
        if(stack_size == 0) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return a[stack_size - 1];
    }
};
int main()
{
    Stack st;
    st.push(3);
    cout << st.top() << "\n";
    st.push(4);
    cout << st.top() << "\n";
    st.push(5);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    return 0;
}
