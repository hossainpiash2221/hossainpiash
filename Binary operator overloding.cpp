#include<iostream>
using namespace std;

class car{
   public:
    int frontsite;
    int backsite;
    int speed;

    void get_input()
    {
        cin>>frontsite;
        cin>>backsite;
        cin>>speed;
    }

    car operator +(car b)
    {
        car temp;
        temp.frontsite=frontsite+b.frontsite;
        temp.backsite=backsite +b.backsite;
        temp.speed=speed+b.speed;

        return temp;
    }

    void show(){
        cout<<frontsite<<" ";
        cout<<backsite<< " ";
        cout<<speed<< " ";
    }

};
int main()
{
    car a, b, c;
    a.get_input();
    b.get_input();
    c=a+b;    //this + operator will be sum operation between two object
    c.show();
}
