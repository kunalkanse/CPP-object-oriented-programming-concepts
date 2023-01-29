#include<iostream>
using namespace std;

class Parameterized
{
    public:
        int a;
        int b;

    public:
        Parameterized(int,int); //Parameterized constructor declered
        void Display();
};

Parameterized :: Parameterized(int x , int y)
{
    a = x;
    b = y;
}

void Parameterized :: Display()
{
    cout<<a<<"\t"<<b<<endl;
}

int main()
{
    Parameterized pobj1(10,20);
    Parameterized pobj2(11,21);
    
    cout<<"pobj1 : ";
    pobj1.Display();

    cout<<"pobj2 : ";
    pobj2.Display();

    return 0;
}
