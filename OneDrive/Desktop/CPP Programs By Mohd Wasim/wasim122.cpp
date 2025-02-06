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
        Complex operator-(Complex C)
        {
            Complex temp;
            temp.real=real-C.real;
            temp.imaginary=imaginary-C.imaginary;
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
    Complex c2(2,3),c1(3,4),c3;
    c3=c1-c2;
    c3.showData();
    cout<<endl;
    return 0;
}