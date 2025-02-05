#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m;
        int &y;
    public:
        Date(int a,int b,int *ptr):y(*ptr)
        {
            d=a;
            m=b;
        }
        void showData()
        {
            cout<<d<<"/"<<m<<"/"<<y<<endl;
        }
};
int main()
{
    int *ptr=(int*)malloc(4);
    *ptr=2025;
    Date d1(12,11,ptr);
    d1.showData();
    cout<<endl;
    return 0;
}