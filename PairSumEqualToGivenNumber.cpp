#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int num[n];
    cout<<"Enter an sorted array: ";
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    cout<<"Enter a NUmber for check Sum of Pair:";
    int k;
    cin>>k;

    int low=0;
    int high=n-1;

    while(low<high)
    {
        if(num[low]+num[high]==k)
        {
            cout<<low<<" + "<<high<<endl;
            return 0;
        }
        else if(num[low]+num[high]>k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    cout<<false;


}
