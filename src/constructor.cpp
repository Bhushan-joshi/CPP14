#include<iostream>
using namespace std;

class base
{
public:
    base();
    base(int);
};

base::base()
{
    cout<<"base default constructor"<<endl;
}

base::base(int x){
    cout<<"param of base "<<x<<endl;
}

class derived:public base
{
public:
    derived();
    derived(int,int);
};
derived::derived(){
    cout<<"default of dervived constructor"<<endl;
}
derived::derived(int a,int x=0):base(x)
{
     cout<<"param of dervived constructor"<<a<<endl;
}

int main()
{
    cout<<"----------------------------------------------------------------\n";
    cout<<"----------------------------------------------------------------\n";
    derived d;
    cout<<"----------------------------------------------------------------\n";
    derived d2(20);
    cout<<"----------------------------------------------------------------\n";
    derived d3(20,10);
    cout<<"----------------------------------------------------------------\n";
    cout<<"----------------------------------------------------------------\n";
    return 0;
}
