#include<iostream>
using namespace std;
class Circle
{
    private:
        int r;        //Instance Variable
    public:
        Circle()
        {
            r=0;
        }
        Circle(int x)
        {
            r=x;
        }
        void showData()
        {
            cout<<"Radius is="<<r<<endl;
        }
};
int main()
{
    Circle c1(2),c2;
    c1.showData();
    c2.showData();
    cout<<endl;
    return 0;
}