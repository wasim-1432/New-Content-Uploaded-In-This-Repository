#include<iostream>
using namespace std;
class Circle
{
    private:
        int r;    //Instance Member variables
    public:
        void setRadius(int x)
        {
            r=x;
        }
        float Area_Of_Circle(int r)
        {
            return 3.14*r*r;
        }
        float Circumference_Of_Circle(int r)
        {
            return 2*3.14*r;
        }
};
int main()
{
    Circle c1;
    c1.setRadius(2);
    cout<<"Area of Circle is="<<c1.Area_Of_Circle(2)<<endl;
    cout<<"Circumference of Circle="<<c1.Circumference_Of_Circle(3);
    cout<<endl;
    return 0;
}