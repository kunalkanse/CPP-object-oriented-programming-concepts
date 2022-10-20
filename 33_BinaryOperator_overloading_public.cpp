#include<iostream>
using namespace std;

// in this program we overloaded some binary operators

//function protoype
//  return_type operator symbol (parameters)
//  {
//      function body;
//  }

class Demo
{
    public:    //private characteristics
        int i ,j;

    public:
        Demo( int x, int y)
        {
            i = x;
            j = y;
        }

        void Display()
        {
            cout<<i<<endl;
            cout<<j<<endl;
        }
};

//function protoype
//  return_type operator symbol (parameters)
//  {
//      function body;
//  }

////////////////*****  + operator overloaded *****////////////////////////
Demo operator + (Demo obj1 , Demo obj2)
{
    cout<<"inside + Operator\n";
    return Demo(obj1.i + obj2.i , obj1.j+obj2.j);
}
//////////////////////////////////////////////////////////////////////////

////////////////*****  * operator overloaded *****////////////////////////
Demo operator * (Demo obj1 , Demo obj2)
{
    cout<<"\ninside * operator\n";
    return Demo(obj1.i*obj2.i , obj1.j*obj2.j);
}
//////////////////////////////////////////////////////////////////////////

////////////////*****  > operator overloaded *****////////////////////////
bool operator >(Demo obj1 , Demo obj2)
{
    if((obj1.i > obj2.i) && (obj1.j>obj2.j))
    {
        return true;
    }
    else
    {
        return false;
    }
}
//////////////////////////////////////////////////////////////////////////

////////////////*****  == operator overloaded *****////////////////////////
bool operator ==(Demo obj1 , Demo obj2)
{
    if((obj1.i == obj2.i) && (obj1.j == obj2.j))
    {
        return true;
    }
    else
    {
        return false;
    }
}
//////////////////////////////////////////////////////////////////////////

int main()
{
    Demo obj1(30,15);
    Demo obj2(10,5);

    Demo Ret(0,0);

    Ret = obj1 + obj2;  // + opearator overloaded
    //Ret = +(obj1,obj2)
    Ret.Display();

    Ret = obj1 * obj2;  // - opearator overloaded
    //Ret = -(obj1,obj2)    internally call
    Ret.Display();

    if(obj1 > obj2)     // > opearator overloaded
    // >(obj1,obj2)    internally call
    {
        cout<<"obj1 > obj2\n";
    }
    else
    {
        cout<<"obj1 < obj2\n";
    }
    
    // ==(obj1,obj2)    internally call
    if(obj1 == obj2)     // == opearator overloaded
    {
        cout<<"obj1 == obj2\n";
    }
    else
    {
        cout<<"obj1 != obj2\n";
    }

    return 0;
}