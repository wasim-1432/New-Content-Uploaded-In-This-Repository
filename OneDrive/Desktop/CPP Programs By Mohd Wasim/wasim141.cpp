#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
    void setData(int,int);
    void showData();
    friend Complex operator +(Complex,Complex);
    friend Complex operator -(Complex,Complex);
    friend Complex operator *(Complex,Complex);
};
Complex operator+(Complex x,Complex y)
{
    Complex temp;
    temp.real=x.real+y.real;
    temp.imaginary=x.imaginary+y.imaginary;
    return temp;
}
Complex operator-(Complex x,Complex y)
{
    Complex temp;
    temp.real=x.real-y.real;
    temp.imaginary=x.imaginary-y.imaginary;
    return temp;
}
Complex operator*(Complex x,Complex y)
{
    Complex temp;
    temp.real=x.real*y.real-x.imaginary*y.imaginary;
    temp.imaginary=x.real*y.imaginary+x.imaginary*y.real;
    return temp;
}
void Complex::setData(int x,int y)
{
    real=x;
    imaginary=y;
}
void Complex::showData()
{
    if(imaginary>=0)
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    else if(imaginary<0)
    {
        cout<<real<<imaginary<<"i"<<endl;
    }
}
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(2,3);
    c2.setData(4,5);
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c3.showData();
    c4.showData();
    c5.showData();
    cout<<endl;
    return 0;
}