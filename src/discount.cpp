#include <iostream>
using namespace std;

int main()
{
    int billAmout;
    cout<<"Enter Bill amount"<<endl;
    cin>>billAmout;
    if (billAmout>=500)
    {
        billAmout=billAmout-(20*billAmout/100);
    }
    if (billAmout>=100 && billAmout<=500)
    {
        billAmout=billAmout-(10*billAmout/100);
    }
    if (billAmout<100)
    {
       billAmout=billAmout;
    }
    cout<<"Total amount to pay:"<<billAmout<<endl;  

    return 0;
}