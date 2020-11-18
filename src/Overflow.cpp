#include <iostream>
using namespace std;
/**
 * this is overflow propgram
 * the overflow means if var is out of range it will take prev value and works as as cyclic
 * eg char has -128 to 127
 * if char exeeds 127->128 then it will be -128 back to its orignal plce
*/
int main()
{
    char x = 127;
    x++;
    x++;
    cout<<"value of x is:-  "<<(int)x<<endl;
    return 0;
}