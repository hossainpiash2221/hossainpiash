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
    int pb=num[1]-num[0];
    int curr = 2;
    int ans =2 ;

    int j =2;
    while (j<n)
    {
        if(pb == num[j]-num[j-1]){
            curr++;
        }else{
            pb=num[j]-num[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }

    cout<<"\n longest Arithmatic length: "<<ans<<endl;
}
