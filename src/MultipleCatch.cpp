#include <iostream>
using namespace std;

class MyException1
{
};
class MyException2 : public MyException1
{
};

int main()
{
	try
	{
		throw 1;
		throw 1.5f;
		throw 'c';
	}
	catch (int i)
	{
		cout << "int catch" << endl;
	}
	catch (float f)
	{
		cout << "float catch" << endl;
	}
	catch (...)
	{
		//this catch block must be at last ; this can catch all type of exceptions
		cout << "catch for all other throws\n";
	}
	cout<<"--------------------------------------------------\n";
	try
	{
		throw MyException1();
	}
	catch (MyException2 e)
	{
		//if you have inheritace then child class should be first
		cout << "My Exception2" << endl;
	}
	catch (MyException1 e)
	{
		cout << " My Exception1" << endl;
	}

	return 0;
}
