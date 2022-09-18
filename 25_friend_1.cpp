#include<iostream>
using namespace std;

// global function can be friend
// class member function can be friend
// whole class can be friend


class Hello
{
    public:
        void HelloFun1();
};
///////////////////////////////////////////////////////////////////////////////////

class frd
{
    public:
        void frdFun();
};

////////////////////////////////////////////////////////////////////////////////////////
class Demo
{
    private:
        int a;
    protected:
        int b;
    
        Demo()
        {
            a = 10;
            b = 20;
        }

    friend void fun();  // global function can be friend

    friend void Hello :: HelloFun1();   // class member function can be friend

    friend class frd;   // whole class can be friend
};
///////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////
// definition of member function of class Hello
////////////////////////////////////////////////////
void Hello :: HelloFun1()   //class member function
{
    Demo obj2;

    cout<<"inside HelloFun\n";
    cout<<obj2.a<<"\n";
    cout<<obj2.b<<"\n";
}

////////////////////////////////////////////////////
// definition of member function of class frd
////////////////////////////////////////////////////
void frd::frdFun()
{
    Demo objFRD;

    cout<<"inside frd()\n"; 
    cout<<objFRD.a<<"\n";
    cout<<objFRD.b<<"\n";   
}

////////////////////////////////////////////////////////
void fun()  //global function
{
    Demo obj1;

    cout<<"inside fun - Global function\n";
    cout<<obj1.a<<"\n";
    cout<<obj1.b<<"\n";
}
////////////////////////////////////////////////////////

int main()
{
    Hello hobj;
    frd fobj;

    fun();  //calling global function

    hobj.HelloFun1();   //caliing member function of class Hello
    
    fobj.frdFun();      //calling member function of class frd

    return 0;
}