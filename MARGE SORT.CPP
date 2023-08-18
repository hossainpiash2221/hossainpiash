#include<iostream>
#include<vector>
using namespace std;

mrge(int arr[],int l, int mid ,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    int i,j,k;
    i=j=0;
    k=l;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }

    }
    while(i<n1)
    {
        arr[k++]=a[i++];
    }
    while(j<n2)
    {
        arr[k++]=b[j++];
    }
}

void mergesort(int arr[],int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        mrge(arr,l,mid,r);
    }
}
int main()
{
    int n=5;
    int a[n]={5,4,3,2,1};
    mergesort(a,0,n);

   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<"  "<<endl;
   }

}
