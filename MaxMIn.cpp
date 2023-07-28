#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }

    int maxNO = INT_MIN;

    int minNO = INT_MAX;
    for(int i=0;i<5;i++){
    maxNO = max(maxNO,num[i]);
    minNO = min(minNO,num[i]);
    }


    cout<<maxNO<<"   "<<minNO<<endl;
}
