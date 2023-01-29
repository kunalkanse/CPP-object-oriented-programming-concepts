#include<iostream>
using namespace std;

class Demo
{
    private:
        int iNo1;
        int iNo2;

    public:
        Demo()
        {
            cout<<"Default Constructor\n";
        }

        Demo(int x,int y)
        {
            cout<<"Paramaterized construcor\n";
            iNo1 = x;
            iNo2 = y;
        }

        Demo(Demo &ref)
        {
            cout<<"Copy constructor\n";
            iNo1 = ref.iNo1;
            iNo2 = ref.iNo2;
        }

        ~Demo()
        {
            cout<<"Destructor\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2(10,20);
    Demo obj3(obj2);

    return 0;
}
