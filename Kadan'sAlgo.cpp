#include<iostream>
#include<climits>
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

    int sum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=num[i];
        if(0>sum)
        {
            sum=0;
            continue;
        }

        maxSum=max(maxSum,sum);
    }
    cout<<maxSum;
}
