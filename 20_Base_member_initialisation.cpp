#include<iostream>
using namespace std;

// initializeer list known as base member initialization 

// in this program we are initialising Base class member from the object call to the Derived class
// as we created object of derived class first compiler goes to derived but it first calls constructor of Base 
// at this time we send paramters to the base class from the derived class

//check out constructor of derived class

class Base
{
    public:
        int a;
        int b;

    Base(int x , int y)
    {
        a = x;
        b = y;
    }
};

class Derived : public Base   // Derived class inheriting Base
{
    public:
        int c;
        int d;

    Derived(int p,int q,int r,int s) : Base(r,s)  // Base member initialisation
    {
        c = p;
        d = q;
    }
    // P & Q initialized to c & d and r & s is sends as parameter to Base class
};

int main()
{
    Derived dobj(10,20,30,40);

    cout<<dobj.a<<"\n";
    cout<<dobj.b<<"\n";
    cout<<dobj.c<<"\n";
    cout<<dobj.d<<"\n";
 
   return 0;
}