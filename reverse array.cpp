#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,num;
    cin >>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {

        cin>>num;
        v.push_back(num);

    }

    vector<int> copyV=v;
    reverse(v.begin()+1,v.end());
    for(auto i:v)
    {
        cout<<i;
    }



}
