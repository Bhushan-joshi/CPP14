#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 90, 563, 98, 7279, 98223770, 83746, 10083};
    int num;
    cout << "Enter number to search :- \n";
    cin >> num;
    for (auto n : a)
    {
        if (num == n)
        {
            cout << "whlahhh number found !!!\n";
            return 0;
        }
    }
    cout << "oops.. number is not in array!\n";

    return 0;
}