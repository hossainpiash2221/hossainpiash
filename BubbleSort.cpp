#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num[]={30,10,50,20};
    int n=end(num)-begin(num);
    cout<<n<<endl;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
            int temp=num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }

}
