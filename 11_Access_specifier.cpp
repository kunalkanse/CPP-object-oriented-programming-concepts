#include<iostream>
using namespace std;

class Demo
{   
    public:
        int a;      //accessible by anyone
    
    private:        //only accesible by class members
        int b;

    protected:      //only accessile by base class and derived class memners
        int c;

    public:

        Demo(int i , int j, int k)
        {
            this->a = i;
            this->b = j;
            this->c = k;
        }

        void display()  //vois display(Demo *const this)
        {
            cout<<"\ninside display\n";
            cout<<"a = "<<this->a<<"\n";
            cout<<"b = "<<this->b<<"\n";
            cout<<"c = "<<this->c<<"\n";
        }
};

int main()
{
    cout<<"inside main\n";

    Demo *p = new Demo(10,20,30);   //abject created -> memory allocated -> constructor called

    cout<<"a = "<<p->a<<"\n";       //accesible due to public access specifier

    //cout<<"b = "<<p->b<<"\n";   //error: 'int Demo::b' is private within this context
    //cout<<"c = "<<p->c<<"\n";   //error: 'int Demo::c' is protected within this context

    p->display();   //display(p) , p contain address of class

    delete p;

    return 0;
}