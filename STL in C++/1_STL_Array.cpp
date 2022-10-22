#include<iostream>

#include<array>   //header file included
using namespace std;

int main()
{
    //class_name <datatype , size> object_name = {};
    array<int,10>arr1;

    array<int,3>arr2 = {10,20,30};

    array<int,5>arr3;

    int sizeOfArr3 = arr3.size(); // size of arr3

    cout<<"input in array : "<<endl;    
    //taking input in STL array
    for(int i = 0; i < sizeOfArr3 ; i++)
    {
        cin>>arr3[i];
    }
    
  //Display elements
    cout<<"\n";
    for(int i = 0; i < sizeOfArr3 ; i++)
    {
        cout<<"arr3["<<i<<"] : "<<arr3[i]<<endl;;
    }

    //accessing using at() method
    cout<<"\narr2.at(2) : "<<arr2.at(2)<<endl;

    //accessing using []
    cout<<"arr2[2] : "<<arr2[2]<<endl;
    
    //when we use at() method and we give index out of bound then 
    // it throws exception but in case of [] program directly gets terminated
    // so at() is more safe than []

    //front() method - returns first element
    cout<<"arr2.front() : "<<arr2.front()<<endl;

    //back() method - returns last element
    cout<<"arr2.back() : "<<arr2.back()<<endl;

    //arr1 = {11,21,31};

    //swap() method - size of both array must be same
    //arr1.swap(arr3);

    //size() method - return number of elements 
    cout<<"arr1.size() : "<<arr1.size()<<endl;

    //max_size() method - return whole size of array
    cout<<"arr3.max_size() : "<<arr3.max_size()<<endl;

    return 0;
}
