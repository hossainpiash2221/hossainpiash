#include<bits/stdc++.h>
using namespace std;

class A{
public:
    int binarySearch(vector <int> v,int s, int e ,int key)
    {
        int start=s;
        int End=e;
        int mid=(start+End)/2;

        while(start<=End)
        {
            if(v[mid]==key)
            {
                return mid;
            }
            if(key>v[mid])
            {
                start=mid+1;
            }
            else{
                End=mid-1;
            }
            mid=(start+End)/2;
        }
        return -1;
    }
};

class B:public A{
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
            else{
                e=mid;
            }

            mid=(s+e)/2;

        }
        return mid;
    }

};

class C: public B{

    public:
        int findPosition(vector<int> v,int k)
        {
            int p=pivot(v);
            if(k>=v[p] && k<=v[v.size()-1])
            {
                return binarySearch(v,p,(v.size()-1),k);
            }
            else
            {
                return binarySearch( v,0,p-1,k);
            }
        }

};

int main()
{   C *ob=new C;
    vector<int> v={6,7,8,9,1,2,3,4};
    cout<<ob->findPosition(v,3)+1;

}
