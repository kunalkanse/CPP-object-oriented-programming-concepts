#include<iostream>
using namespace std;

// initialising and displaying private characteristiccs of class

class Demo
{
    int num1;   //private by default
    int num2;   //private by default

    public:
        void get_set(int , int);    //function prototype
        void dispaly();
};

// :: this is scope resolution operator

void Demo :: get_set(int a, int b)  //function defination
{
    num1 = a;   //setting private characteristcs
    num2 = b;   //setting private characteristcs
}

void Demo :: dispaly()  //displaying private value o class
{
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;
}

int main()
{
    Demo obj1;
    Demo obj2;

    cout<<"Object 1"<<endl;
    
    obj1.get_set(11,21);
    obj1.dispaly();

    cout<<"\nObject 2"<<endl;
    
    obj2.get_set(51,101);
    obj2.dispaly();

    return 0;    
}