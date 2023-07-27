#include<bits/stdc++.h>

using namespace std;

int DecimalToBinary(int n)//7
{
    int  ans=0;
    int x=1;
    while(x<=n)
    {
        x*=2;  //x=8
    }
    x/=2;   //x=4

    while(x>0)//4/2/1--->x
    {
        int MSB = n/x;   //MSB=1/1/1
        n=n-MSB*x;  //n=3/1/0
        x/=2;   //x=2/1/0
        ans=    ans*10+MSB;  //ans=1/11/111
    }

}


int main()
{
    int n;
    cin>>n;

    cout<<DecimalToBinary(n)<<endl;

}
