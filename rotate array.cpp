#include<iostream>
using namespace std;

int main()
{
    int ar[]={1,2,3,4,5,6,7};
    int k;
    cin>>k;
int     n=7;
    int temp[n];
    for(int i=0;i<n;i++)
    {

        temp[(i+k)%n]=ar[i];

    }
    for(int i=0;i<n;i++)
    {
        cout<<temp[i];
    }
}
