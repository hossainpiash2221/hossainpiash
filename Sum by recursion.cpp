#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0){return 0;}

    int Tsum=sum(n-1);

    return n+Tsum;

}

int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}
