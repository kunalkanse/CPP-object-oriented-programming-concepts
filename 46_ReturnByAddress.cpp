#include<iostream>
using namespace std;

int * alloc(int *p,int size)
{
    p = new int[size];

    for(int i = 0; i< size ; i++)
    {
        cin>>p[i];
    }

    return p;
}

int main()
{
    int size = 0;
    int *ptr = nullptr;

    cout<<"Enter the size : ";
    cin>>size;

    ptr = alloc(ptr,size);

    cout<<"Elements are : "<<endl;
    for(int i = 0; i< size ; i++)
    {
        cout<<ptr[i]<<" ";
    }
    
    return 0;
}
