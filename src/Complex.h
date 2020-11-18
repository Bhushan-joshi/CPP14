#pragma once
#include<iostream>
#include<ostream>

class Complex
{
public:
    int real;
    int img;
    Complex(int, int);
    Complex operator+(Complex);
    friend iostream & operator<<(iostream , Complex);
};

Complex::Complex(int real = 0, int img = 0)
{
    this->real = real;
    this->img = img;
}
Complex Complex::operator+(Complex c)
{
    Complex temp;
    temp.real = this->real + c.real;
    temp.img = this->img + c.img;
    return temp;
}
 
iostream & operator<<(iostream &O, Complex &C){
    O<<C.real<<" + "<<C.img<<"i"<<endl;
}