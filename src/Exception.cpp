#include <iostream>
using namespace std;

int division(int num, int dnum)
{
	if (dnum == 0)
		throw 1; //you can throw anything you wanted;
	return num / dnum;
}

int main()
{
	int x,y,z;
	cout<<"Enter two numbers to divide \n";
	cin>>x>>y;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch( int i)//const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
		cout<<"Division by zero "<<i<<endl;
	}
	cout<<"bye \n";
}