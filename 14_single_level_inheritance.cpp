#include<iostream>
using namespace std;

class Base
{
    public:
        int x , y;

    Base()
    {
        cout<<"\nBase constructor\n";
    }

    ~Base()
    {
        cout<<"Base destructor\n";    
    }

    void fun()
    {
        cout<<"inside fun\n";
    }
};

class Derived : public Base //derived class inherits Base class 
{
    public:
        int a , b;

    Derived()
    {
        cout<<"Derived constructor\n";
    }

    ~Derived()
    {
        cout<<"Derived destructor\n";    
    }

    void gun()
    {
        cout<<"inside gun\n";
    }
};

int main()
{
   // Base bobj;
 
    Derived dobj;
    // Run code to understand calling sequence

    dobj.fun(); //calling method of Base using object of derived class object

    return 0;
}