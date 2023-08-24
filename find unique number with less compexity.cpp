#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={1,1,2,2,3,6,7,6,7};
    int Un=0;
    for(int i=0;i<v.size();i++)
    {
        Un=Un^v[i];

    }
    cout<<endl<<Un;



}
