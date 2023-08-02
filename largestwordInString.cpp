#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="a b c d e f ghijk  1";
   // int length = s.length();
   // cout<<length<< "  "<<s[0] ;
    int len=0;
    int i=0;
    int ans =INT_MIN;
    while(s[i]!='\0')
    {

        if(s[i]==' ')
        {
            len=0;
        }
        else{
        len++;
        ans=max(ans,len);
        }
    i++;
    }
    cout<<ans;



}
