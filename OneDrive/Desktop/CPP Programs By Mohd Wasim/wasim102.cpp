#include<iostream>
#include<string.h>
using namespace std;
class Customer
{
    private:
        int cust_id;          //Instance Member Variable
        char name[50];        //Instance Member Variable
        char email[50];       //Instance Member Variable
        char mobile[12];      //Instance Member Variable
    public:
        Customer()            //Non Parameterized Constructor
        {
            cust_id=103;
            strcpy(name,"None");
            strcpy(email,"wasim.ahmad00881@gmail.com");
            strcpy(mobile,"9621521166");
        }
        void showData()
        {
            cout<<"Customer_Id="<<cust_id<<" Name="<<name<<" Email="<<email<<" Mobile "<<mobile<<endl;
        }
};
int main()
{
    Customer c1;
    c1.showData();
    cout<<endl;
    return 0;
}