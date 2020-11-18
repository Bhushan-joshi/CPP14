#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int sz ,val;
	vector<int> v(1);
	cout<<"Enter length:-"<<endl;
	cin>>sz;
	cout<<"Enter values:-"<<endl;
	for (int i = 0; i < sz; i++)
	{
		cin>>val;
		v.push_back(val);
	}
	cout<<"------------------------------------\n";
	vector<int>::iterator itr;
	for (itr=v.begin(); itr != v.end(); itr++)
	{
		cout<<*itr<<endl;
	}
	
	
	return 0;
}
