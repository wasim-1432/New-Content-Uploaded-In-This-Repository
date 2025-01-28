#include<iostream>
using namespace std;
int Sort_Given_Array_Using_Default_Argument(bool n=false);
int main()
{
    bool n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    Sort_Given_Array_Using_Default_Argument(n);
    cout<<endl;
    return 0;
}
int Sort_Given_Array_Using_Default_Argument(bool n)
{
    int size,temp;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size],i,round;
    cout<<"Enter the value of the array"<<endl;
    for(i=0;i<=size-1;i++)
    {
        cin>>arr[i];
    }
    if(n==true)
    {
        for(round=1;round<=size-1;round++)
        {
            for(i=0;i<=size-round-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        cout<<"Sorted Arry in Ascending Order"<<endl;
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

    else
    {
        for(round=1;round<=size-1;round++)
        {
            for(i=0;i<=size-round-1;i++)
            {
                if(arr[i]<arr[i+1])
                {
                    temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
        }
        cout<<"Sorted Arry in Descending Order"<<endl;
        for(i=0;i<=size-1;i++)
        {
            cout<<arr[i]<<endl;
        }
    }

}