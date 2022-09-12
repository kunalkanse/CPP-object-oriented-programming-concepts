#include<iostream>
using namespace std;

// This pointer holds the address of the caller object

class Demo
{
    public:
        int iNo1;
        int iNo2;

        Demo(int i = 10, int j = 20)
        {
            iNo1 = i;   //iNo1 = this -> i; 
            iNo2 = j;   //iNo2 = this -> j;
        }

        void display(int x)     //display(Demo* this , int x)
        {
            cout<<"\nValue of iNo1 in "<<this<<" : "<<iNo1<<"\n";
            cout<<"Value of iNo2 : "<<this<<" : "<<iNo2<<"\n";
            cout<<"Value of x : "<<x<<"\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2(21);
    Demo obj3(21,51);

    obj1.display(101);  //display(&obj1 , 101);
    obj2.display(101);  //display(&obj2 , 101);
    obj3.display(101);  //display(&obj3 , 101);

    return 0;
}