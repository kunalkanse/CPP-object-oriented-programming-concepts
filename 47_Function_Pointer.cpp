#include<iostream>
using namespace std;

//function pointer stores the address of the function


int maximum(int a, int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>c)
        return b;
    else 
        return c;
}

int minimum(int a, int b, int c)
{
    if(a<b && a<c)
        return a;
    else if(b<c)
        return b;
    else 
        return c;
}


int main()
{
    int a = 10, b = 20, c = 15;   

    int (*fp)(int,int,int); //function pointer prototype
    
    fp = maximum;           //assigning address of function to pointer 
    cout<<"maximum : "<<(fp)(a,b,c)<<endl;    // calling function

    fp = minimum;           //assigning address of function to pointer
    cout<<"minimum : "<<(fp)(a,b,c)<<endl;      // calling function

    return 0;
}

