#include<iostream>
using namespace std;

/*  when we call the function by using the base class pointer the function of base class gets called
    if our base class is pointing to the derived class object then the function of derived class should be called

    to achieve this requirment in c++ we have to use te concenp of virtual

*/

class Base
{
    public:
        int x,y;    // 8 bytes

        virtual void fun()
        {
            cout<<"Inside Base fun\n";
        }

        virtual void gun()  // virtual function
        {
            cout<<"Inside Base gun\n";
        }

        virtual void sun()      //virtual function
        {
            cout<<"Inside Base sun\n";
        }

        void moon()      //non virtual function
        {
            cout<<"Inside Base moon\n";
        }
};

class Derived : public Base
{
    public:
        int i,j;

        void gun()  //Redefination  // writing virtual in optional
        {
            cout<<"Inside Derived gun\n";
        }
        
        virtual void run()  //Redefination
        {
            cout<<"Inside Derived sun\n";
        }


};

int main()
{
    Base *Bp = new Derived();           // up casting
    
    Bp -> fun();
    Bp -> gun();
    //called function of derived class

    Bp -> sun();

    cout<<"Size of base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";

    cout<<"Extra 4 bytes are added implicitly of virtual pointer (vptr)\n";
    cout<<"virtual pointer points to the table which contains virtual functions";

    return 0;
}