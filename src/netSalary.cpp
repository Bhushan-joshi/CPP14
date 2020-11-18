#include<iostream>
using namespace std;

int main(){
    int basicSalary,Allowences,Deduction;
    cout<<"Enter basic Salary pay:\n";
    cin>>basicSalary;
    cout<<"Enter Allowences pay :\n";
    cin>>Allowences;
    cout<<"Enter Deductions :\n";
    cin>>Deduction;
    basicSalary=basicSalary+(((basicSalary*Allowences)/100) -((basicSalary*Deduction)/100));
    cout<<"Net Salary is :"<<basicSalary;
    return 0;

}