#include<iostream>
using namespace std;

//////////////////////////////////////////////////////////////
// redefination is defining same function with same prototype in another class
// redefine gun() of base in derived
// function overloading -  same class ,differnt prototype
// cannot redefine same prototype function in same class
///////////////////////////////////////////////////////////////

class Base
{
    public:
        int x,y;

    void fun(int i) //function overloading
    {
        cout<<"Base fun\n";
    }

    void fun(int i,int j)   //function overloading
    {
        cout<<"Base fun\n";
    }

    void gun()  //defination
    {
        cout<<"Base gun\n";
    }

/*  Not allowed due to same prototype

    void gun()  
    {
        cout<<"Base gun\n";
    }
*/
};

class Derived : public Base
{
    public:
        int i,j;

    void sun()  //defination 
    {
        cout<<"Derived sun\n";
    }

     void gun()  //Redefination , redefining gun of base
    {
        cout<<"Derived gun\n";
    }
};

int main()
{
    Derived dobj;

    dobj.fun(10);   //early binding , compile time polymorphism

    dobj.gun();     //late binding , due to Redefination
    //This call goes to Derived gun() , because we created object of derived
    return 0;
}