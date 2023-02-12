#include<stdio.h>

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
    printf("maximum : %d",(fp)(a,b,c));    

    fp = minimum;           //assigning address of function to pointer
    printf("\nminimum : %d",(fp)(a,b,c));  

    return 0;
}

