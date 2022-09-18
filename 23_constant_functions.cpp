#include<iostream>
using namespace std;

// when we create function as constant then we cannot change the class characteristics inside that function;
//the contant variables or parameters of function also we canno change

// rules :
//  1) normal object can call bothe constant & non-constant functions
//  2) constant object can call only constant function

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

        void fun(int a , const int b) const     //constant function
        {
            int no = 20;
            const int x = 10;

            //i++ ; j++; //not allowed
            //x++; b++; //not allowed

            a++;
            no++;
        }

        void gun()
        {
            cout<<"inside gun";
        }
};

int main()
{
    Base obj1;  //call to default constructor
    const Base obj2;    //constant object

    obj1.fun(10,20);
    obj2.fun(30,40);

    //obj2.gun();   // not allowed , rule number 2


    return 0;
}

