#include<iostream>
#include<string>

using namespace std;
 void rev(string s)
 {
    if(s.length()==0)
        return;

    string ros =s.substr(1);    //1 index theke shesh porjonto
    rev(ros);
    cout<<s[0]<<s[1]<<endl;
 }

int main()
{
    string s ="piash";
        rev(s);

}
