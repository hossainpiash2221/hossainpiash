#include<bits/stdc++.h>
using namespace std;
int a=0,b=1,c;
int fib(int n)
{
    if(n>0)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<" "<<c ;
        fib(n-1);
    }
}

int main()
{
    int n;
    cin>>n;
    cout <<a<<" "<<b;
    fib(n-2);
}
