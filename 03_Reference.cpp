#include<iostream>
using namespace std;

int main()
{
    int no = 10;
    int arr[4] = {10,20,30,40};

    int *p = &no;   //pointer to no
    int **q = &p;    //pointer to pointer

    int &ref = no;   //Reference of no
    int &ref2 = ref; //reference to reference

    int *(&pRef) = p;   //reference of pointer

    int (&brr)[4] = arr;    //reference to array

    cout<<"pointer to variable\n";
    cout<<"&no = "<<&no<<"\n";
    cout<<"p = "<<p<<"\n";

    cout<<"\nreference to variable\n";
    cout<<"no = "<<no<<"\n";
    cout<<"ref = "<<ref<<"\n";

    cout<<"\nreference to pointer\n";
    cout<<"ref2 = "<<ref2<<"\n";
    cout<<"q = "<<q<<"\n";

    cout<<"\nreference to array\n";
    cout<<"arr[2] = "<<arr[2]<<"\n";
    cout<<"brr[2] = "<<brr[2]<<"\n";

    return 0;
}