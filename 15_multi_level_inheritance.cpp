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

class Derived_1 : public Base //derived class inherits Base class 
{
    public:
        int a , b;

    Derived_1()
    {
        cout<<"Derived constructor\n";
    }

    ~Derived_1()
    {
        cout<<"Derived destructor\n";    
    }

    void gun()
    {
        cout<<"inside gun\n";
    }
};

class Derived_2 : public Derived_1 //derived_2 class inherits Derived_1 class 
{
    public:
        int a , b;

    Derived_2()
    {
        cout<<"Derived_2 constructor\n";
    }

    ~Derived_2()
    {
        cout<<"Derived_2 destructor\n";    
    }

    void sun()
    {
        cout<<"inside sun\n";
    }
};

int main()
{
   // Base bobj;
 
    Derived_2 dobj_2;
    // Run code to understand calling sequence

    dobj_2.fun(); //calling method of Base using object of derived class object
    dobj_2.gun();

    return 0;
}