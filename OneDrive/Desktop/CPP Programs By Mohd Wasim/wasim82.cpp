#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;  //Instance Member Variables
    public:
        void setData(int x,int y,int z)   //Instance Member Function
        {
            hr=x;
            min=y;
            sec=z;
        }
        void showData()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
};
int main()
{
    Time t1;
    t1.setData(3,45,20);
    t1.showData();
    cout<<endl;
    return 0;
}