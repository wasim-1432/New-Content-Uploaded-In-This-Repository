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
        Complex operator==(Complex C)
        {
            Complex temp;
            temp.real=real+C.real;
            temp.imaginary=imaginary+C.imaginary;
            if(temp.real/2.0==real && temp.imaginary/2.0==imaginary)
            {
                cout<<"Equal Complex";
            }
            else
            {
                cout<<"Not equal complex";
            }
        }
};
int main()
{
    Complex c1(2,3),c2(3,3);
    c1==c2;
    cout<<endl;
    return 0;
}