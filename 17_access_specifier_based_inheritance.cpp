#include<iostream>
using namespace std;

class Base
{
    public:
        int a;

    private:
        int b;

    protected:
        int c;

    public:
        Base()
        {
            a = 10;
            b = 20;
            c = 30;
        }

        void fun()
        {
            cout<<"Base fun\n";
        }
};

class Derived : private Base
{   
    public:
        void display()
        {
            cout<<a<<endl;
            //cout<<b;
            cout<<c;
        }
};

/*
class Derived2 : public Derived
{
    public:
        void display()
        {
            cout<<a<<endl;
            //cout<<b;
            cout<<c;
        }
};*/

int main()
{
    Derived dobj;

    dobj.display();
    //dobj.fun();

    return 0;
}

