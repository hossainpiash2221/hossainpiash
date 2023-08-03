#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
   // getline(cin,str);
   // cout<<str;

    string str2="piash";
    string str3=str2;
sort(str3.begin(),str3.end());
    cout<<str2<<endl;


    string str4="123";
    int convertInInteger=stoi(str4);

    cout<<convertInInteger+9000<<endl;

    string convertInString =to_string(convertInInteger);
    cout<<convertInString+"2"<<endl;


    //capital

    string str5="amjad";

    transform(str5.begin(),str5.end(),str5.begin(),:: toupper);
    cout<<str5<<endl;

    transform(str5.begin(),str5.end(),str5.begin(),:: tolower);
    cout<<str5<<endl;
}
