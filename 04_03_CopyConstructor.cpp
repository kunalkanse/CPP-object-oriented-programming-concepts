#include<iostream>
using namespace std;


class Parameterized
{
    public:
        int a;
        int b;

    public:
        Parameterized(int , int); //Parameterized constructor declered
        Parameterized(Parameterized &); //copy constructor declered
        void Display();
};

Parameterized :: Parameterized(int x , int y)   //Parameterized constructor defined
{
    a = x;
    b = y;
}

Parameterized :: Parameterized(Parameterized &Ref)  //copy constructor defined
{
    a = Ref.a;  
    b = Ref.b;
}

void Parameterized :: Display()
{
    cout<<a<<"\t"<<b<<endl;
}

int main()
{
    Parameterized pobj1(10,20);
    Parameterized pobj2(pobj1);
    
    cout<<"pobj1 : ";
    pobj1.Display();

    cout<<"pobj2 : ";
    pobj2.Display();

    return 0;
}
