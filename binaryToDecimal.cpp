#include<bits/stdc++.h>
using namespace std;

int BinaryToDecimal(int num)
{
    int dec=0;
    int x=1;

    while(num>0)
    {
        int y= num%10;
        dec+=x*y;
        x*=2;
        num/=10;
    }
    return dec;

}
int main()
{
    int n;
    cin>>n;

    cout<<BinaryToDecimal(n)<<endl;
}
