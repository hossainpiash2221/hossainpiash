#include<iostream>

using namespace std;

int main()
{
    int num[]={10,30,100,60,50};

    int n =end(num)-begin(num);

    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=num[i];
        while( j>=0 && temp<num[j])
        {
            num[j+1]=num[j];

        j--;
        }
        num[j+1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }

}
