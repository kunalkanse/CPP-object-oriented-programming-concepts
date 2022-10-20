#include<iostream>  
using namespace std;  

//When the inline function is encountered,
//then the definition of the function is copied to it. 
//In this case, there is no control transfer which saves a lot of time and also decreases the overhead.

inline int add(int a, int b)  
{  
    return(a+b);   
}  

int main()  
{  

    cout<<"Addition of 'a' and 'b' is:"; 

    add(10,20);

    return 0;  
}  