#include<bits/stdc++.h>
using namespace std;

class A
{
    public:

    int pivot(vector<int> v)
    {
        int s=0;
        int e=v.size()-1;
        int mid=(s+e)/2;

        while(s<e)
        {
            if(v[mid]>=v[0])
            {
                s=mid+1;

            }
            else
            {
                e=mid;
            }
            mid=(s+e)/2;
        }
        return s;
    }

};
int main()
{
    A *ob = new A;
    vector<int> v= {5,6,1,2,3};

    cout<<ob->pivot(v);

}
