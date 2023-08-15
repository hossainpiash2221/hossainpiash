#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v1({1,2,3,4});
    vector<int> v2({1,6});
    vector<int> ans;
    int i=v1.size()-1;
    int j=v2.size()-1;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int sum = v1[i]+v2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
        i--;
    }
    while(i>=0)
    {
        int sum=v1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0)
    {
        int sum=v2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }

  reverse(ans.begin(),ans.end());
    for(int i:ans)
    {
        cout<<i;
    }

}
