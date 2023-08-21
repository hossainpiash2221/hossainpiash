#include<iostream>
using namespace std;
class Complex
{
public:
    int img;
    int real;

    void get_input()
    {
        cin>>real;
        char ch;
        cin>>ch;
        cin>>img;
    }

    Complex operator +(Complex b)
    {
        Complex temp;
        temp.real=real+b.real;
        temp.img=img+b.img;

        return temp;
    }
    void show()
    {
        cout<<real<<" +i"<<img;
    }
};
int main()
{
    Complex a, b, c;
    a.get_input();
    b.get_input();
    c=a+b;
    c.show();

}
