#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;  //Instance Member Variables
    public:
        void setData(int x,int y)  //Instance Member Function
        {
            a=x;
            b=y;
        }
        void ShowData()
        {
            cout<<"A="<<a<<" "<<"B="<<b<<endl;
        }
};
int main()
{
    Complex C1;
    C1.setData(2,3);
    C1.ShowData();
    cout<<endl;
    return 0;
}