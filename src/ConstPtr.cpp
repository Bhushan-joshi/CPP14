#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int y = 10;
	int z=20;
	/**
	 * In this case integer ponter is constant
	 * the pointer x can't modify the data of y
	 * but it can point to another value
	 * i.e. data is locked not  pointer
	*/
	const int *x = &y;//valid
	//++*x;//this is not valid
	x=&z;//this is valid
	cout<<*x<<endl;

	/**
	 * In this pointer is constant of type integer
	 * the pointer a is constant and the address can't be modified
	 * but you can change the data pointed by the pointer 
	 * i.e. pointer is locked not data
	 * */
	int * const a = &y;//valid
	++*a;//valid
	//a=&z;//not valid 
	cout<<*a<<endl;

	/**
	 * in this case both data and pointer are locked
	 * */
	const int * const b = &z;//valid
	// ++*b;//not valid
	//a=&z;//not valid 
	cout<<*b<<endl;
	return 0;
}
