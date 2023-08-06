#include<iostream>
using namespace std;

int firstOcc(int a[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    firstOcc(a,n,i+1,key);
}

int lastOcc(int a[],int n,int i, int key)
{
    if(i==n)
    {
        return -1;
    }

    int j=lastOcc(a,n,i+1,key);


    if(j!=-1)
    {
        return j;
    }
    if(a[i]==key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<" "<< firstOcc(a,n,0,2)<<endl;

    cout<<" "<< lastOcc(a,n,0,2);

}
