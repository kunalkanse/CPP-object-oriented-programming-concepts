#include<iostream>
using namespace std;

// constructor is used to initialize the characetristics of class
// it gets called implicitly when object is created

class Demo
{
    public:
        int a, b;

    public:
        Demo(); // constructor declered
};

Demo :: Demo()  //constructor defined
{
    a = 0;
    b = 0;
}

int main()
{
    Demo obj;

    cout<<obj.a<<endl;
    cout<<obj.b<<endl;

    return 0;
}
