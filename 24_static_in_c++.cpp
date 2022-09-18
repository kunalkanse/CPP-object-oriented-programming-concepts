#include<iostream>
using namespace std;

/*
    It is initialized to zero when the first object of its class is created.
    It is visible only within the class, but its lifetime is the entire program.
    Only one copy of that member is created for the entire class and it is shared by all the objects of that class.

    we have to initialize static characteristics defining the class. 
    To initialize we have to use the class name then scope resolution operator (::), then the variable name.
*/

class Demo
{
    public:
        int a;  //non static characteristic
        static int no;  //static characteristics

        Demo(int x)
        {
            a = x;
        }

        void fun()  //non static characteristics
        {
            cout<<"inside fun\n";
        }

        static void gun()   //static function
        {
            cout<<"inside gun\n";
            cout<<Demo::no<<"\n";
            
            //cout<<a;    //not allowed , static function has not access to non static characteristics
        }
};

int Demo :: no = 50;    //initialising static characteristics using scope resolution operator

int main()
{
    
    cout<<"inside main\n";

    cout<<"accessing static data of class from main\n";
    cout<<"Demo::no : "<<Demo::no<<"\n";
    Demo::gun();

    Demo obj1(10);
    Demo obj2(20);

    cout<<"Size of objects : "<<sizeof(obj1)<<"\n";

    return 0;
}