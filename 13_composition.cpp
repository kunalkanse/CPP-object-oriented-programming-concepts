#include<iostream>
using namespace std;

//composition means one class can create obect of another class

class hello
{
    public:
        int no;

    void fun()
    {
        cout<<"Inside fun\n";
    }
};

class Demo
{
    public:
        int x;

    hello hobj;     //composition

    void gun()
    {
        cout<<"Inside gun\n";
    }
};

int main()
{
    Demo dobj;

    dobj.hobj.fun();

    return 0;
}