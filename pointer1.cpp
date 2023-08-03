#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *ptr=&a;

    cout<<a<<endl; //10
    cout<<&a<<endl;//address
    cout<<ptr<<endl;// address
    cout<<*ptr<<endl;//10
/*
    int arr[]={1,2,3};

    int *ptr2=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*ptr2; //123
        ptr2++;
    }



    int arr[]={1,2,3};

    int *ptr2=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*arr;
        arr++;  //illegal
    }
*/

    int arr[]={1,2,3};

    int *ptr2=arr;
    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i); //123

    }
}
