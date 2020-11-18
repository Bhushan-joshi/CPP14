#include<iostream>
using namespace std;

class Test{
	private:
		int x=0;
	protected:
		int y=0;
	public:
		int z=0;
		friend void func();//By making this function as friend we can access all DM of this class
};

void func(){
	Test t1;
	cout<<t1.z<<endl;//only this is can be access
	cout<<t1.x<<endl;//In order to access this members we need to make this functions as a friend of class test
	cout<<t1.y<<endl;//In order to access this members we need to make this functions as a friend of class test
}
