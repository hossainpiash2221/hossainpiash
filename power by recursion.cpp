#include<bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if(p==0){return 1;}
//    int prepower=power(n,p-1);
    return n*power(n,p-1);
}

int main()
{


    cout<<power(2,3);
}
