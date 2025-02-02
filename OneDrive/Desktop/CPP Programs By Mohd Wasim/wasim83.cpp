#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        void setData(int a,int b,int c)
        {
            d=a;
            m=b;
            y=c;
        }
        void showData()
        {
            cout<<d<<"/"<<m<<"/"<<y<<endl;
        }
};
int main()
{
    Date d1;
    d1.setData(31,12,2022);
    d1.showData();
    cout<<endl;
    return 0;
}