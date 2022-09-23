#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;

        virtual void fun()
        {
            cout<<"Inside Base fun\n";
        } 

        void gun()
        {
            cout<<"Inside Base gun\n";
        }

        virtual void sun() = 0; // pure virtual function
};

class Derived : public Base
{
    public:
        int i,j;

        void fun()  //Redefination  // writing virtual in optional
        {
            cout<<"Inside Derived fun\n";
        }
        
        virtual void run()  //Redefination
        {
            cout<<"Inside Derived sun\n";
        }

        void sun()  // pure virtual function defination
        {
            cout<<"Derived sun\n";
        }
};

int main()
{
    Base *Bp = new Derived();           // up casting
    
    Bp -> fun();
    Bp -> sun();
    
    cout<<"Size of base : "<<sizeof(Base)<<"\n";
    cout<<"Size of Derived : "<<sizeof(Derived)<<"\n";

    return 0;
}