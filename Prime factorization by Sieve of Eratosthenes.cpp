#include<bits/stdc++.h>
using namespace std;

void PrimeFactorization(int n)
{
    int a[n];
    for(int i=0 ;i<=n;i++)
    {
        a[i]=i;
    }

    for(int i=2;i<=n;i++)
    {
        if(a[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(a[j]==j)
                {
                    a[j]=i;

                }
            }
        }
    }

    while (n!=1){
        cout<<"  "<<a[n];
        n=n/a[n];
    }
 //   for(int i=0;i<=n;i++)
   //     cout<<" "<<a[i];
}

int main()
{
    int n;
    cin>>n;
    PrimeFactorization(n);
}
