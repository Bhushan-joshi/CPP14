#include <iostream>
using namespace std;

class Test
{
public:
	int x=10,y=20;
	void func() const
	{ 
		/**
		 * If you want to make this function write protected for DM then add const 
		 * this can only read values
		 * */
		// x++;// this is not valid
		cout<<x<<" "<<y<<endl;
	}
};
int main(int argc, char const *argv[])
{
	Test t;
	t.func();
	return 0;
}
