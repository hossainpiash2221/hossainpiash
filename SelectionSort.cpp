#include<iostream>
using namespace std;

int main()
{

    int num[]={30,20,10,40};

    int n=end(num)-begin(num);
    cout<<n<<endl;

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(num[j]<num[i])
            {
            int temp = num[j];
            num[j]=num[i];
            num[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<"  ";
    }


}
