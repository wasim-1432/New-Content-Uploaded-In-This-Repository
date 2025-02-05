#include<iostream>
using namespace std;
class Room
{
    private:
        int room_number;          //Instance Member Variable
        int &room_type;           //Instance Member Variable
        int &is_AC;               //Instance Member Variable
        float price;              //Instance Member Variable
    public:
        Room(int rn,int *ptr1,int *ptr2,float p):room_type(*ptr1),is_AC(*ptr2)
        {
            room_number=rn;
            price=p;
        }
        void showData()
        {
            cout<<"Room Number="<<room_number<<"\n"<<"Room Type="<<room_type<<"\n"<<"AC="<<is_AC<<"\n"<<"Price="<<price<<endl;
        }
};
int main()
{
    int *ptr1=(int*)malloc(4);
    *ptr1=1;
    int *ptr2=(int*)malloc(4);
    *ptr2=1;
    Room r1(12,ptr1,ptr2,12000.78);
    r1.showData();
    cout<<endl;
    return 0;
}