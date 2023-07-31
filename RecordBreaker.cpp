#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int num[n+1];
    num[n]=-1;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int ans=0;
    int mx=-1;

    for(int i=0;i<n;i++)
    {
        if(num[i]>mx && num[i]>num[i+1])
        {
            ans++;
        }
        mx=max(num[i],mx);
    }

    cout<<"Records breaker"<<ans<<endl;
}
