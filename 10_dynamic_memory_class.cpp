#include<iostream>
#include<stdlib.h>
using namespace std;

class Demo
{
    public:
        int no1;
        int no2;

    Demo()
    {
        cout<<"Constructor\n";
    }

    ~Demo()
    {
        cout<<"7) Destructor called\n";
    }

    void fun(int a)     //void fun(Demo * const this , int a)
    {
        cout<<"5) inside fun()\n";
    }
};

int main()
{
    //Demo obj;    //Static object creation

    Demo *p = NULL;
    Demo *q = NULL;

    cout<<"1) malloc executed\n";
    p = (Demo *)malloc(sizeof(Demo));   //dynamic memory allocation for class using malloc
    cout<<"2) malloc does not call constructor\n";

    cout<<"3) new executed and calls ";
    q = new Demo;   //dynamic memory allocation for class using new
    // q = new Demo(10); if parameterised constructor

    cout<<"4) q->no1 : "<<q->no1<<endl;     //accessing characteristics

    q->fun(10);     //calling function using pointer


    cout<<"6) free executed\n";
    free (p);

    cout<<"7) delete executed\n";
    delete q;

    return 0;
}