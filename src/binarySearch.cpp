#include <iostream>
using namespace std;

int main()
{
    int a[]={10,29,39,49,55,56,78,99};
    int l=0,h=7,mid,key;
    cout<<"Enter a key"<<endl;
    cin>>key;
    while (l<=h)
    {
        mid=(l+h)/2;
        if (key==a[mid])
        {
          cout<<"value found at"<<mid<<endl;
            return 0;
        }
        else if (key<a[mid])h=mid-1;//lowing h to mid
        else l=mid+1;//low to mid +1 if key is greater than mid
    }
    cout<<"key is not found \n";
    return 0;
}