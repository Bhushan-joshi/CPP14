#include <iostream>
using namespace std;
namespace Func1
{
	void func()
	{
		cout << "This is func1 from namespace func1" << endl;
	}
} // namespace Func1

namespace Func2
{
	void func()
	{
		cout<<"This is func2 from namespace func2"<<endl;
	}
} // namespace Func2
using namespace Func2;
int main(int argc, char const *argv[])
{
	Func1::func();//without using the using namespace 
	func();//add  using namespace Func2 to use without func2 i.e. func(); //by using namespace;
	return 0;
}

