#include<iostream>


using namespace std;

long double fact(long double num)
{
      long double fact =1;
        for(int i=2;i<=num;i++)
        {
            fact=fact*i;
        }
        return fact;
}

int main()
{
    long double n,r;

    cin>>n>>r;
      long   double c= n-r;
        cout<<fact(n)<<"    "<<fact(c)<<"    "<<fact(r)<<endl;

    long double res = fact(n)/(fact(c)*fact(r));
    cout<<" c="<<res<<endl;
}
