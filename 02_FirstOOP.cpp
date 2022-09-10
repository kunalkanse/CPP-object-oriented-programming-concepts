#include<iostream>
using namespace std;

// Encapsulation = Characteristics + Behaviors
// constructor : Initialise characteristics (variables) and allocate memory for extrnal resources
// destructor : used to deallocate the resources which are allocated by the destructor

class Demo
{
    public:
        //Characteristics
        int iNo1;
        int iNo2;
    
        //Behaviours
    /*Demo()  //constructor
    {
        cout<<"inside constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }*/

    ~Demo() //destructor
    {
        cout<<"inside destructor\n";
    }

    void fun()  //user defined function
    {
        cout<<"inside fun\n";
    }

    void gun()  //user defined function
    {
        cout<<"inside gun\n";
    }
};

Demo obj1;

int main()
{
    
    Demo obj2;

    obj1.fun();
    obj2.gun();

    //depends on storage class
    cout<<"obj1.iNo1 : "<<obj1.iNo1<<endl;  //default value
    cout<<"obj1.iNo2 : "<<obj2.iNo1<<endl;  //default value

    cout<<"obj2.iNo1 : "<<obj1.iNo1<<endl;  //garbage
    cout<<"obj2.iNo2 : "<<obj2.iNo1<<endl;  //garbage

    return 0;
}