#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    n = num;
    do
    {
        digit = num % 10;
        // cout<<digit<<endl;
        rev = (rev * 10) + digit;
        // cout<<rev<<endl;
        num = num / 10;
        // cout<<num<<endl;
    } while (num != 0);
    cout << "Reverse of a number is " << rev << endl;
    if (n == rev)
    {
        cout << "number is panlindrom \n";
    }
    else
    {
        cout << "number is not panlindrom \n";
    }

    return 0;
}