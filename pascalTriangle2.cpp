#include<iostream>
using namespace std;


int fact(int num)
{
    int temp=1;
    for(int i=2;i<=num;i++)
    {
        temp*=i;
    }
    return temp;
}
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j =1 ;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j =0;j<=i;j++)
        {
            cout<<(fact(i)/(fact(i-j)*fact(j)))<<" ";
        }
        cout<<endl;
    }
}
