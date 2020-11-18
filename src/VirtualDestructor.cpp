#include <iostream>
using namespace std;

class Base
{
private:
	/* data */
public:
	Base()
	{
		cout << "This is base constructo" << endl;
	}
	virtual ~Base()
	{
		cout << "This is base destructor" << endl;
	}
};

class Derived:public Base
{
private:
public:
	Derived()
	{
		cout << "Derived class constructor" << endl;
	}
	~Derived()
	{
		cout << "Derived class destructor" << endl;
	}
};

int main(int argc, char const *argv[])
{
	Base *ptr=new Derived();
	cout<<"----------------------------------------------------------------------------\n";
	delete ptr;
	/**
	 * In above case the base class destructor is called but not of the derived class
	 * if you create a pointer then you must delete that pointer
	 * In order to call the derived class destructor make base class destructor as virtual
	 * */
	
	return 0;
}
