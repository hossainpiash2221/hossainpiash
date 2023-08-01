#include<iostream>
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
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=num[j];
            //cout<<sum<<" ";
            ans=max(ans,sum);

        }
    }
    cout<<ans;
}

