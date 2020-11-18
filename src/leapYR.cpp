#include<iostream>
using namespace std;

int main()
{
    int yr;
    cout<<"Enter a year :- "<<endl;
    cin>>yr;
    if(yr%4==0){
        if (yr%100==0)
        {
           if (yr%400==0)
           {
               cout<<yr <<"is a Leap year."<<endl;
           }else
           {
               cout<<yr<<"is not a Leap year."<<endl;
           }
           
        }else
        {
            cout<<yr<<"is a Leap year."<<endl;
        }
        
    }
    else
    {
        cout<<yr<<"is not a Leap year."<<endl;
    }
    
    return 0;
}
