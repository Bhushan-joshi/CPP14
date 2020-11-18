#include <iostream>
using namespace std;

template<class T>
class Stack
{
private:
	T *STK;
	int top;
	int size;

public:
	Stack(int);
	void push(T);
	T pop();
	void display();
	~Stack();
};

template<class T>
Stack<T>::Stack(int sz)
{
	STK = new T[sz];
	size = sz;
	top = -1;
}

template<class T>
void Stack<T>::push(T num)
{
	if (top == size - 1)
		cout << "Stack overflow\n";
	else
	{
		top++;
		STK[top] = num;
	}
}
template<class T>
T Stack<T>::pop()
{
	T x = 0;
	if (top == -1)
	{
		cout << "Stack underflow \n";
	}
	else
	{
		x = STK[top];
		top--;
	}
	return x;
}

template<class T>
void Stack<T>::display()
{
	for (int i = 0; i < size; i++)
	{
		cout<<STK[i]<<endl;
	}
	
}
template<class T>
Stack<T>::~Stack()
{
	delete STK; 
}

int main()
{
	int size,val;
	cout<<"Enter Size of Stack\n";
	cin>>size;
	Stack<int> s(size);//You spcifies the type of template in <>
	cout<<"Enter Values:- \n";
	for (int i = 0; i < size; i++)
	{
		cin>>val;
		s.push(val);
	}
	s.display();
	return 0;	
}