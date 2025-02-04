#include<iostream>
using namespace std;
class Cuboid
{
    private:
        int length,breath,height;     // Instance Member Variables
    public:
        Cuboid(int l,int b,int h)
        {
            length=l;
            breath=b;
            height=h;
        }
        Cuboid()
        {
            length=0;
            breath=0;
            height=0;
        }
        void showData()
        {
            cout<<"Length="<<length<<" Breath="<<breath<<" Height="<<height<<endl;
        }
};
int main()
{
    Cuboid c1(2,3,5);
    c1.showData();
    cout<<endl;
    return 0;
}