#include<iostream>
#include<string>
using namespace std;
int cOut=0;

int main()
{
    int n;
    cin>>n;
    string a[n];
     for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {

        int j=i-1;

        while(j>=0 && i==0)
        {

            if(a[i].compare(a[j])==0)
            {

               cOut++;

            }

        j--;
        }
        if(cOut!=0)
        {
             cout<<a[i]+to_string(cOut)<<endl;
        }
        else
        {
             cout<<"OK"<<endl;
        }

        cOut=0;


    }
}


