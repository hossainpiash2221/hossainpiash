#include<bits/stdc++.h>

using namespace std;
int getBit(int n, int pos)
{
    return((n & (1<<pos)))!=0;
}

int setBit(int n,int pos)
{
    return (n| (1<<pos));
}

int clear(int n,int pos)
{

    int complement=~(1<<pos);
    return(n & complement);
}

int upadate(int n, int pos , int value)
{
    int complement=~(1<<pos);
    n=(n & complement);

    return  (n | value<<pos);
}

int main()
{


    cout<<getBit(5,2)<<endl; //2 number index er bit  1

    cout<<setBit(5,1)<<endl<<endl;  // 1 number index a set 1;   7

    cout<<clear(5,0)<<endl;         //4

    cout<<upadate(5,1,1);           //7
}
