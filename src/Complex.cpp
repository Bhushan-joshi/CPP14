#include<iostream>
#include "Complex.h"

using namespace std;

int main()
{
    Complex c1(10,11);
    Complex c2(20,22);
    Complex c3;
    c3=c1+c2;
    // cout<<c3.real<<"+ i"<<c3.img<<endl;
    cout<<c3;
    return 0;
}
