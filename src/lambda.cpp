#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a=10;
	int y=20;
	/**
	 * lambda function are inline functions without name
	 * signature of a lambda function is 
	 * [capture_list](paramter-list)->return-type{function body}();
	 * capture_list is just variable that you want to access inside this functions
	 * 
	 * */
	[](){cout<<10+4<<endl;}();
	[&a](int z){cout<<a+z<<endl;}(10);//a is main functions variable z in parameter list 
	auto f=[&](){return a+y;};//& in capture_list will give all variables i.e. a,y
	cout<<f();
	return 0;
}
