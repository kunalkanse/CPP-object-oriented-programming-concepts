#include<iostream>
using namespace std;

/*  when we call the function by using the base class pointer the function of base class gets called
    if our base class is pointing to the derived class object then the function of derived class should be called

    to achieve this requirment in c++ we have to use te concept of virtual

*/

class Base
{
    public:
        int x,y;

        void fun()  //defination
        {
            cout<<"Inside Base fun\n";
        }

        void gun()  //defination
        {
            cout<<"Inside Base gun\n";
        }

        void sun()  //defination
        {
            cout<<"Inside Base sun\n";
        }
};

class Derived : public Base
{
    public:
        int i,j;

        void gun()  //redefination
        {
            cout<<"Inside Derived gun\n";
        }
        
        void sun()  //redefination
        {
            cout<<"Inside Derived sun\n";
        }
};

int main()
{
    Base *Bp = new Derived();           // up casting
    
    Bp -> fun();
    Bp -> gun();
    //should be called function of derived class, but its calling base gun

    Bp -> sun();

    return 0;
}