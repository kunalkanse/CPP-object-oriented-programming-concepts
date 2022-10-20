#include<iostream>
using namespace std;

// At the time of deallocation of memory only destructor of the Base class gets called,
// to avoid this problem if we make base class destructor as virtual then,
// destrucot of derived class also gets called

class Base
{
    public:
        int x,y;

        Base()
        {
            cout<<"Base constructor"<<endl;
        }

        virtual ~ Base()    //virtual destructor
        {
            cout<<"Base destructor"<<endl;
        }
};

class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"Derived constructor"<<endl;
        }

        ~ Derived()
        {
            cout<<"Derived destructor"<<endl;
        }
};

int main()
{
    Base* bobj = new Derived();

    delete bobj;
}