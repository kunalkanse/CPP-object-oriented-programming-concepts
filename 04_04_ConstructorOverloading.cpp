#include<iostream>
using namespace std;

class Demo
{
    public:
        int a;
        int b;

    public:
        //constructor overloading
        Demo();             //default constructor declered
        Demo(int , int);    //Parameterized constructor declered
        Demo(Demo &);       //copy constructor declered
        void Display();
};

Demo :: Demo()  //constructor defined
{
    a = 0;
    b = 0;
}

Demo :: Demo(int x , int y)
{
    a = x;
    b = y;
}

Demo :: Demo(Demo &Ref)  //copy constructor defined
{
    a = Ref.a;  
    b = Ref.b;
}

void Demo :: Display()
{
    cout<<a<<"\t"<<b<<endl;
}

int main()
{
    Demo dobj1;
    Demo dobj2(11,21);
    Demo dobj3(dobj2);

    
    cout<<"pobj1 : ";
    dobj1.Display();

    cout<<"pobj2 : ";
    dobj2.Display();

    cout<<"pobj3 : ";
    dobj3.Display();

    return 0;
}
