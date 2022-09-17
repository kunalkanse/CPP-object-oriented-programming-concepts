#include<iostream>
using namespace std;

//use initializer list to initialize constant characteristics
//initializeer list also known as base member initialization 

class Base
{
    public:
        int a;
        const int b;    // constant characteristics

    public:

        Base() : a(0) , b(0)    // default initializer list
        {
            cout<<"default constructor\n";
        }

        Base(int x , int y) : a(x),b(y)     // parameterized initializer list
        {
            cout<<"Parameterized constructor\n";
        }
};

int main()
{
    Base obj1;  //call to default constructor
    cout<<obj1.b<<endl;

    //obj1.b++;   // Error due to b in constant

    Base obj2(10,20);   //call to parmeterized constructor
    cout<<obj2.b<<endl;

    //obj2.b++;   // Error due to b in constant

    return 0;
}

