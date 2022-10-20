#include<iostream>
using namespace std;

class Demo
{
    private:
        int i , j;

    public:
        Demo( int x, int y)
        {
            i = x;
            j = y;
        }

        void Display()
        {
            cout<<i<<"\t"<<j<<endl;
            cout<<endl;
        }

        friend Demo operator ++ (Demo&);
        friend Demo operator ++ (Demo &,int);
};

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////

Demo operator ++(Demo& op)  // preincrement overloaded
{
    op.i++;
    op.j++;
    return op;
}

Demo operator ++(Demo &op ,int) // postincrement overloaded
{
    Demo temp(op.i , op.j); // temp(10 , 20)
    op.i++;
    op.j++;

    return temp;    // return 10,20 in ret
}

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

int main()
{
    Demo obj1(10 , 20);
    Demo Ret1(0,0);

    Demo obj2(10 , 20);
    Demo Ret2(0,0);


    Ret1 = ++obj1;  // pre increment operator
    Ret1.Display();
    obj1.Display();

    Ret2 = obj2++;  // post increment operator
    Ret2.Display();
    obj2.Display();

    return 0;

}