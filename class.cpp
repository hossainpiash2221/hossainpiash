#include<iostream>
#include<vector>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    void printF()
    {
        cout<<"Name:";
        cout<<name<<endl;

        cout<<"age:";
        cout<<age<<endl;

        cout<<"gender:";
        cout<<gender<<endl;
    }

};


int main()
{
    int n;
    cin>>n;
    student  a[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Name:";
        cin>>a[i].name;

        cout<<"age:";
        cin>>a[i].age;

        cout<<"gender:";
        cin>>a[i].gender;
    }

    for(int i=0;i<n;i++)
    {
        a[i].printF();
    }
}
