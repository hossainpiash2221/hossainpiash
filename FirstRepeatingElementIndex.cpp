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
    const int N =1e5;
    int idx[N];

    for(int i=0;i<n;i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(idx[num[i]]!= -1)
        {
            minidx=min(minidx,idx[num[i]]);
        }
        else{
            idx[num[i]]=i;
        }
    }

    if(minidx==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
                cout<<minidx+1<<endl;
    }


}
