#include<iostream>
#include<climits>
using namespace std;
void subsets(int a[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<a[j]<<" ";
            }
        }cout<<endl;
    }
}

int main()
{
    int a[4]={5,6,7,8};
    int n=4;
    subsets(a,n);

}
