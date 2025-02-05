#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;        //Instance Member Variable
    public:
        Date(int a,int b,int c): d(a),m(b),y(c)         //Initialiser
        {}
        void showData()
        {
            cout<<d<<"/"<<m<<"/"<<y<<endl;
        }
};
int main()
{
    Date d(12,11,2025);
    d.showData();
    cout<<endl;
    return 0;
}