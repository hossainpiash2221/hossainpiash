#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int a[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=1;
        }
        cout<<endl;
    }

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            a[i][j]=a[i][j-1]+a[i-1][j];
        }
    }
    cout<<a[n-1][n-1];
}
