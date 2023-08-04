#include<iostream>
using namespace std;

bool checkPowerOf2(int n)
{
    return (n && !(n&(n-1)));
}

int main()
{
    int n;

    cin>>n;
    if(checkPowerOf2(n))
    {
        cout<<" Its power of two.";
    }
    else{cout<<"Its not power of two.";}

}
