
#include<bits/stdc++.h>

using namespace std;


string addBinary(int a, int b)
{
    string ans="";
    string ans2="";

    int carry=0;
    int x,y;

    while(a>0 || b>0)
    {

        x=a%10;
        y=b%10;

        int temp=(x+y+carry);
        if(temp>=2)
        {

            carry=temp/2;
            ans=ans+to_string(temp%2);
            //ans2.push_back(ans);
        }
        else{
                ans=ans+to_string(temp);
        carry=0;
           // ans2.push_back(temp);
        }
       a/=10;
       b/=10;
    }
    ans=ans+to_string(carry);
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{

    int a,b;
    cin>>a>>b;
    cout<<addBinary(a,b)<<endl;


}
