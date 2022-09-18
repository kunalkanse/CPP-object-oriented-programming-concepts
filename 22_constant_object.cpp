#include<iostream>
using namespace std;

// if we create object as constant then we cannot change the characteristics inside of that characteristics
// if we try compiler gives error

class Base
{
    public:
        int i;
        int j;    // constant characteristics

    public:

        Base()
        {
            i = 0;
            j = 0;
            cout<<"default constructor\n";
        }

        Base(int x , int y)
        {
            i = x;
            j = y;
            cout<<"Parameterized constructor\n";
        }
};

int main()
{
    Base obj1;  //call to default constructor

    const Base obj2(10,20);    //constant object
    //call to parmeterized constructor

    obj1.i++;

    // obj2.i++;    //error

    return 0;
}

