#include <iostream>
using namespace std;

// How to deal with the ambigiuty in Multiple Inheritance

class Base_1
{
public:
    int x, y;

    Base_1()
    {
        cout << "Base_1 constructor\n";
    }

    ~Base_1()
    {
        cout << "Base_1 destructor\n";
    }

    void fun()
    {
        cout << "inside Base_1 fun\n";
    }
};

class Base_2
{
public:
    int a, b;

    Base_2()
    {
        cout << "Base_2 constructor\n";
    }

    ~Base_2()
    {
        cout << "Base_2 destructor\n";
    }

    void fun()
    {
        cout << "inside Base_2 fun\n";
    }
};

class Derived : public Base_2, public Base_1 //Derived class inherits Base_2 & Base_1 class
{
public:
    int a, b;

    Derived()
    {
        cout << "Derived constructor\n";
    }

    ~Derived()
    {
        cout << "Derived destructor\n";
    }

    void sun()
    {
        cout << "inside sun\n";
    }
};

int main()
{
    Derived dobj;
    // Run code to understand calling sequence
    dobj.Base_1::fun(); // To resolve Ambiguity
    cout << "\n";
    return 0;
}
