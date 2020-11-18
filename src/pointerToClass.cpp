#include<iostream>
using namespace std;

class rectangle
{
    public:
        int length,breadth;
        int area(){
            return length*breadth;
        }
        int parimeter(){
            return 2*(length*breadth);
        }
};

int main(int argc, char const *argv[])
{
    rectangle r1;//creates object in stack memory;
    rectangle *r2=new rectangle;//you can also write new rectangle(); this will create object inside a heap memory
    r1.length=10;
    r1.breadth=10;
    cout<<"Area of r1 is "<< r1.area()<<endl<<"perimeter of r1 is:"<<r1.parimeter()<<endl;
    r2->length=20;
    r2->breadth=20;
    cout<<"Area of r2 is "<< r2->area()<<endl<<"perimeter of r2 is:"<<r2->parimeter()<<endl;
    return 0;
}
