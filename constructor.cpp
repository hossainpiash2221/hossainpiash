#include<iostream>
using namespace std;

class student{


    public:
         static int Time;
    string name;
    int age;
    student()
    {
        cout<<"contructor called"<<endl;
    }
    student(string name,int age)
    {
       //  cout<<this<<endl;
        this->name=name;
        this->age=age;
    //    cout<<name;
      //  cout<<age<<endl;
    }


    void print()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
    static int random()
    {
        cout<<"I am static method"<<Time<<endl;
    }

};
int student :: Time=9;
int main()
{


    student ob("amjad",10);
    cout<<&ob<<endl;
    ob.print();
    student ob2(ob);

    cout<<&ob2<<endl;
    ob2.print();

    ob2.name[0]='p';
    ob2.print();
    ob.print();


    cout<<"static "<<student::Time<<endl;
    student::random();



}
