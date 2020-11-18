#include<iostream>
using namespace std;

int main(){
    int num , fact=1;
    cout<<"Enter a Number :- "<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        fact = i*fact;
    }
    cout<<"factorial is :"<<fact<<endl;
    return 0;
}