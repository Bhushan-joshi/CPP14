#include <iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Enter a number :-"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if (num %i ==0)
        {
            cout<<i<<"is factor of"<<num<<endl;
            sum=sum+i;
        }
    }
    if (sum==(num*2))
    {
        cout<<num<<"is a perfect number"<<endl;
    }
    
    return 0;
}