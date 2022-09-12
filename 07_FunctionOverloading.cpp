#include<iostream>
using namespace std;

//function overloading is the type of polymorphism
//in function overloading we can create funtion with same name by changing parameters type or sequence

// we can perform function overloading in following way
// 1) by changing number of arguments
// 2) by changing datatype of argumnet
// 3) by chnaging sequence of datatype

class Demo
{
    public:
            //name mangling - compiler dependent

            //addition@2ii
        int addition(int a , int b)     
        {
            return a + b;
        }

            //addition@3iii
        int addition(int a , float b , int c)
        {
            return a + b + c;
        }

            //addition@4iiii
        int addition(int a , int b , int c , int d)
        {
            return a + b + c + d;
        }
};

int main()
{
    Demo obj;
    int iRet = 0;

    iRet = obj.addition(10,20);     //addition(&obj,10,20)
    cout<<iRet<<"\n";

    iRet = obj.addition(10,20.5,30);  //addition(&obj,10,20,30)
    cout<<iRet<<"\n";

    iRet = obj.addition(10,20,30,40);   //addition(&obj,10,20,30,40)
    cout<<iRet<<"\n";

    return 0;
}