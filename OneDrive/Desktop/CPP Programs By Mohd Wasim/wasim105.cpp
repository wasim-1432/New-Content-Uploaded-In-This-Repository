#include<iostream>
using namespace std;
class Complex
{
    private:
        int real,imaginary;               //Instance Member Variables
    public:
        Complex(int x,int y)      //Parameterised Constructor
        {
            real=x;
            imaginary=y;
        }
        void showData()
        {
            cout<<real<<" + "<<imaginary<<"i"<<endl;
        }
};
int main()
{
    Complex ArrayComplex[5]={Complex(2,3),Complex(3,4),Complex(4,5),Complex(5,6),Complex(6,7)};
    for(int i=0;i<=4;i++)
    {
        ArrayComplex[i].showData();
    }
    cout<<endl;
    return 0;
}