#include<iostream>
using namespace std;

int main()
{
    int x,y,z;

    cout<<"Enter values of y & z : ";
    cin>>y>>z;

    x = y - z;

    try
    {
        if(x != 0)
        {
            cout<<"y / x = "<<y/x;
        }
        else
        {
            throw(x);
        }
    }
    catch(int E)
    {
        cout<<"Exception caught : Devide by "<<E;
    }

    cout<<"\nEnd of file";


    return 0;
    
}