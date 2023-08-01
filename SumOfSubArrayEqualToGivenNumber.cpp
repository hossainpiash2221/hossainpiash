#include<bits/stdc++.h>
using namespace std;

int SumOfSubArray(int num[],int s,int n)
{


    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {

                sum=sum+num[j];
                if(sum==s){
                    cout<<i+1<<" " << j+1;
                    return 0;
                }
                if(sum>s)
                {
                    break;
                }
        }
    }
}

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
    cout<<"Enter a NUmber:";
    cin>>s;

    SumOfSubArray(num,s,n);

}
