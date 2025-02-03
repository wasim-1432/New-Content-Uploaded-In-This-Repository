#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;   //Instance Variables
    public:
        void setData(int x,int y)  //Instance Member Function
        {
            a=x;
            b=y;
        }
        void showData()            //Instance Member Function
        {
            cout<<"A="<<a<<" B="<<b<<endl;
        }
        Complex add(Complex C)     //Instance Member Function
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
        Complex subtract(Complex C)    //Instance Member Function
        {
            Complex temp;
            temp.a=a-C.a;
            temp.b=b-C.b;
            return temp;
        }
        Complex multiply(Complex C)   //Instnace Member Function
        {
            Complex temp;
            temp.a=a*C.a-b*C.b;
            temp.b=b*C.a+a*C.b;
            return temp;
        }
};
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(2,3);
    c2.setData(3,4);
    c3=c1.add(c2);
    c4=c1.subtract(c2);
    c5=c1.multiply(c2);
    c5.showData();
    c4.showData();
    c3.showData();
    c1.showData();
    c2.showData();
    cout<<endl;
    return 0;
}