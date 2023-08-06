#include<iostream>
using namespace std;

void decrease(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<" "<<n;
    decrease(n-1);

}

void increase(int n)
{

    if(n==0)
    {
        return;
    }

    increase(n-1);
     cout<<" ,"<<n;
     for(int i=0;i<n;i++)
        cout<<" x ";
}

int main()
{
    int n;
    cin>>n;
    decrease(n);

    cout<<endl;
    increase(n);
}
