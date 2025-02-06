#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;
    public:
        Complex()
        {
            real=0;
            imaginary=0;
        }
        Complex(int x,int y)
        {
            real=x;
            imaginary=y;
        }
        Complex operator*(Complex C)
        {
            Complex temp;
            temp.real=real*C.real-imaginary*C.imaginary;
            temp.imaginary=real*C.imaginary+imaginary*C.real;
            return temp;
        }
        void showData()
        {
            if(imaginary>=0)
            {
                cout<<real<<" + "<<imaginary<<"i"<<endl;
            }
            else
            {
                cout<<real<<imaginary<<"i"<<endl;
            }
        }
};
int main()
{
    Complex c1(2,3),c2(3,4),c3;
    c3=c1*c2;
    c3.showData();
    cout<<endl;
    return 0;
}