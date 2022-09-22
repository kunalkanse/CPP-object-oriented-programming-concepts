#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
};

class Derived : public Base
{
    public:
        int i,j;
};

int main()
{
    char ch = 'A';
    int no = 11;
    
    char *cp1 = &ch;         // No casting
    int *ip1 = &no;              // No casting
    
    char *cp2 = (char *)&no;           // up casting
    int *ip2 = (int *)&ch;             // down casting

//////////////****** Dynamic casting *****///////////////////////////////////////////////////////
    // 
    Base* Bp1 = new Base;           // no casting
    Derived* Dp1 = new Derived;     // no casting

    Base* Bp2 = new Derived;    //up casting
    
    //Derived* Dp2 = new Base;    //down casting
    // not allowed
    //error: invalid conversion from 'Base*' to 'Derived*'

//////////////////////////////////////////////////////////////////////////////

////////////////****** static casting *****//////////////////////////////////////////////////////////////
    
    Base Base_obj;
    Derived Derived_obj;

    Base *Bptr1 = &Base_obj;    // no casting
    Derived *Dptr1 = &Derived_obj;  // no casting

    Base *Bptr2 = &Derived_obj;  // upcasting

    //Derived *Dptr2 = &Base_obj;  // Downcasting
    // not allowed
    //error: invalid conversion from 'Base*' to 'Derived*'

////////////////////////////////////////////////////////////////////////////////

    return 0;
}