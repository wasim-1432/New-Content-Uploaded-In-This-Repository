#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,min,sec;       //Instance Member Variable
    public:
        Time(int x,int y,int z)        //Parameterised Constructor
        {
            hr=x;
            min=y;
            sec=z;
        }
        Time()                       //Non Parameterised Constructor
        {
            hr=0;
            min=0;
            sec=0;
        }
        void showTime()
        {
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
};
int main()
{
    Time t1(12,05,55);
    t1.showTime();
    cout<<endl;
    return 0;
}