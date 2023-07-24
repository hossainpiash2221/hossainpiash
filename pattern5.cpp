#include<iostream>
using namespace std;

int main()
{
    int row,col;

    cin>>row;
        int count = 1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(count>9){
            cout<<count<<" ";
            count++;
            }
            else
            {
                cout<<count<<"  ";
                count++;
            }
        }
        cout<<endl;
    }
}
