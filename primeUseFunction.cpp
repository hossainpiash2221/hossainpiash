#include<iostream>
#include<cmath>
using namespace std;
 bool prime(int n);

int main()
{

    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if(prime(i)==true)
        {
            cout<<i<<endl;
        }
    }
}
bool prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
