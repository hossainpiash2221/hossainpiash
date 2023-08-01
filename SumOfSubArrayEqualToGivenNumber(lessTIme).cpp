#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num[n];

    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int s;
    cout<<"Enter a sum:";
    cin>>s;
    int i=0,j=0,st=-1,en=-1;
    int sum=0;

    while(j<n && sum+num[j]<=s)
    {
        sum+=num[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<"  " << j+1;
        return 0;
    }

    while(j<n)
    {
        sum+=num[j];
        while(sum>s)
        {
            sum-=num[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en;



}
