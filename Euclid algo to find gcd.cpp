#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    while(b!=0)
    {
        int rem=a%b;  //42%24=18
        a=b;          //24%18=6
        b=rem;        //18%6=0
    }
    return a;
}

int main()
{
    int a, b ;
    cin>>a>>b;

    cout<<GCD(a,b);
}
