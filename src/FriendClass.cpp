#include<iostream>
using namespace std;

class Container;
class Frnd{
	private:
		int x=10;
	protected:
		int y=20;
	public:
		int z=30;
	friend Container;
};

class Container{
	public:
		Frnd f;
		void temp(){
			cout<<f.z<<endl;
			cout<<f.y<<endl;
			cout<<f.x<<endl;
		}
};


int main(int argc, char const *argv[])
{
	Container C;
	C.temp();
	return 0;
}
