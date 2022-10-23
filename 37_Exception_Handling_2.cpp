#include<iostream>
using namespace std;

void devide(int x, int y, int z)
{
    cout<<"inside devide()"<<endl;
    if((x - y) != 0)
    {
        int sum = x+y+z;
        cout<<"sum is : "<<sum<<endl;
    }
    else
    {
        throw(x-y);
    }
}

int main()
{
    try
    {
        cout<<"inside try block"<<endl;
        devide(10,20,30);

        devide(10,10,30);       
    }
    catch(int e)
    {
        cout<<"exception caught";
    }
    


    return 0;
    
}
