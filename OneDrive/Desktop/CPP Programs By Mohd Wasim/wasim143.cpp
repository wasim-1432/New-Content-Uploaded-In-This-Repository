#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        void setData(int,int);
        void showData();
        friend ostream& operator<<(ostream&,Complex);
        friend istream& operator>>(istream&,Complex);
};
ostream& operator<<(ostream& dout,Complex x)      //Insertion Operator
{
    dout<<x.real<<"+"<<x.imaginary<<"i"<<endl;
    return dout;
}
istream& operator>>(istream& din,Complex x)      //Extraction Operator
{
    din>>x.real>>x.imaginary;
    return din;
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
    Complex c1;
    c1.setData(2,3);
    c1.showData();
    cout<<c1;
    cout<<endl;
    return 0;
}