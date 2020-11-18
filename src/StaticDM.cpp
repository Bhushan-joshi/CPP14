#include <iostream>
using namespace std;

class Test
{
private:
	int x = 10;
	int y = 20;

public:
	static int counter; //this static member  are created only once no mater how man times you create object;
	Test(){
		counter++;
	}
	static void temp(){
		// cout<<x<<endl; the static DM can only access static DM
		// cout<<y<<endl; the static DM can only access static DM
		cout<<counter<<endl;
	}
};

int Test::counter=0;

int main(int argc, char const *argv[])
{
	Test t1;//for this object counter is 0->1;
	Test t2;//and For this object counter is 1->2
	t1.temp();//you can call static Dm by onject or
	Test::temp();//by the class name itself.
	return 0;
}
