#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int arr[5]; //static memory allocation

    int size = 0;

    cout<<"Enter the size : ";
    cin>>size;

    int *p = (int*)malloc(size * sizeof(int));      //allocate using malloc

    int *q = new int[size];     //allocate using new

    q[0] = 10;
    p[0] = 10;

    cout<<"Before Dealoocation : \n"<<endl;

    cout<<q<<endl;
    cout<<q[0]<<endl;
    cout<<p[0]<<endl;

    free(p);    //free malloc
 
    delete []q; //delete new

    cout<<"after Dealoocation : \n"<<endl;

    cout<<q<<endl;
    cout<<q[0]<<endl;
    cout<<p[0];
    return 0;
}