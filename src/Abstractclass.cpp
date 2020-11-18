#include<iostream>
using namespace std;

class Base{//this class is a abstract class 'caz it contains pure virtual functions
    int x=0;
    public:
    virtual void func1()=0;//if you put =0 then this is pure virtual function
    //and this function must be override in derived class
};

class Derived :public Base{
    public:
    void func1(){
        cout<<" This is func1"<<endl;
    }
};

int main(int argc, char const *argv[])
{
    Base *b=new Derived;
    b->func1();
    return 0;
}