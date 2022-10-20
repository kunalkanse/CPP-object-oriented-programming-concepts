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

        friend Demo operator + (Demo);
        friend Demo operator - (Demo);
};

/////////////////////////////////////////////////////
/////////////////////////////////////////////////////
Demo operator -(Demo op)
{
    return Demo(-op.i , -op.j);
}

Demo operator +(Demo op)
{
    return Demo(-op.i , -op.j);
}

/////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////

int main()
{
    Demo obj(11 , -21);
    Demo Ret(0,0);

    Ret = -(obj);
    Ret.Display();

    Ret = +(obj);
    Ret.Display();

    return 0;

}