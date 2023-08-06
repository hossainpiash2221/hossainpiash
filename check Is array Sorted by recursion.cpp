#include<iostream>

using namespace std;

bool sorted(int a[],int n )
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(a[0]>a[1])
    {
        return false;
    }
    return sorted(a+1,n-1);
}

int main()
{

    int n;
    cout<<"number of elements:";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    if(sorted(a,5))
    {
        cout<<" sorted";
    }
    else
    {
        cout<<"not sorted";
    }
}
