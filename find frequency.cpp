#include<iostream>
#include<vector>
using namespace std;
class A
{
    public:
    int first(vector<int> v,int key)
    {
        int s=0;
        int e=v.size()-1;
        int mid=(s+e)/2;
        int ans=0;
        while(s<=e)
        {
            if(v[mid]==key)
            {
                ans=mid;
                e=mid-1;
            }
            else if(v[mid]<key)
            {
                s=mid+1;
            }
            else if(v[mid]>key)
            {
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return ans;
    }

    int last(vector<int> v,int key)
    {
        int s=0;
        int e=v.size()-1;
        int mid=(s+e)/2;
        int ans=0;
        while(s<=e)
        {
            if(v[mid]==key)
            {
                ans=mid;
                s=mid+1;
            }
            else if(v[mid]<key)
            {
                s=mid+1;
            }
            else if(v[mid]>key)
            {
                e=mid-1;
            }
            mid=(s+e)/2;
        }
        return ans;
    }

    int Count(vector<int> v,int k)
    {
        int frequency=last(v,3)-first(v,3)+1;
        return frequency;
    }

};

int main()
{
    A* ob = new A();
    vector<int> v= {1,2,3,3,3,3,4};
    cout<<ob->first(v,3)<<"   ";
    cout<<ob->last(v,3)<<endl;

    cout<<"frequency of "<<ob->Count(v,3);
}
