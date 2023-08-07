#include<iostream>
#include<string>
using namespace std;

string removeDuplicate(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    if(s[0]==s[1])
    {
        removeDuplicate(s.substr(1));
    }
    else
    {
        cout<<s[0];
        removeDuplicate(s.substr(1));
    }




}

string removeDup(string s)
{
    if(s.length()==0)
    {
        return "";
    }
        char ch=s[0];
        string ans =removeDup(s.substr(1));

        if(ch==ans[0])
        {
            return ans;
        }
        return (ch+ans);
}

int main()
{
    string s="abcdddddeeeeeeefffffaggggg";
 //   removeDuplicate(s);

    cout<<endl<<removeDup(s);
}
