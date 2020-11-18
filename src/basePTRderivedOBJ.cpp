/**
 * base class pointer can receive object of derived class
 * but you can only call or use DM of base class 
 **/

#include<iostream>
using namespace std;

class Base{
    public:
    void func1(){
        cout<<"This is func1 from  base class "<<endl;
    }
};
class Derived :public Base{
    public:
    void func2(){
        cout<<"This is func2 from derived class "<<endl;
    }
};
int main()
{
    Base *p;
    p=new Derived();
    p->func1();
    // p->func2()// this line will give error
    cout<<"--------------------------------------------"<<endl;
    Derived *d;
    // d=new Base();// this is also not allowed you canot do this;
    return 0;
}
