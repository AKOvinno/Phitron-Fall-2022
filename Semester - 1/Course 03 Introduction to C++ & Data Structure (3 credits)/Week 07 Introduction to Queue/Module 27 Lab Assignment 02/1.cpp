#include<bits/stdc++.h>
using namespace std;

template <class T>
class Queue
{
	T* array;
	int front_index;
	int back_index;
	int size;
	int capacity;

	void resize()
	{
    	T* new_array = new T[capacity * 2];
    	int j = front_index;
    	for (int i = 0; i < size; i++)
    	{
        	new_array[i] = array[j];
        	j = (j + 1) % capacity;
    	}
    	front_index = 0;
    	back_index = size;
    	capacity *= 2;
    	delete[] array;
    	array = new_array;
	}

public:
	Queue() : front_index(0), back_index(0), size(0), capacity(1)
	{
    	array = new T[capacity];
	}

	~Queue()
	{
    	delete[] array;
	}

	void enqueue(T element)  //enqueue operation
	{
    	if (size == capacity)
    	{
        	resize();
    	}
    	array[back_index] = element;
    	back_index = (back_index + 1) % capacity;
    	size++;
	}

	void dequeue() //dequeue operation
	{
    	if (size == 0)
    	{
        	cout << "Queue is empty" << endl;
        	return;
    	}
    	front_index = (front_index + 1) % capacity;
    	size--;
	}

	T front()
	{
    	if (size == 0)
    	{
        	cout << "Queue is empty" << endl;
        	return T();
    	}
    	return array[front_index];
	}
};
int main()
{
	Queue<int> q;

	q.enqueue(2);
	q.enqueue(4);
	q.enqueue(6);
	q.enqueue(8);

	cout << "The front element: " << q.front() << endl;
	q.dequeue();
	cout << "The front element after dequeue: " << q.front() << endl;
	q.enqueue(10);
	cout << "The front element after enqueue: " << q.front() << endl;

	return 0;
}
