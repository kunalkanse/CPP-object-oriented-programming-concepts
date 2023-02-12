#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string str;

    cout<<"Enter the string : ";
    getline(cin,str);

    cout<<str<<endl;

    cout<<"\nstr.length() : "<<str.length()<<endl;
    cout<<"str.size() : "<<str.size()<<endl;
    cout<<"str.capacity() : "<<str.capacity()<<endl;
    cout<<"str.resize(20)"<<endl;
    str.resize(20);
    cout<<"str.capacity() : "<<str.capacity()<<endl;
    cout<<"str.max_size() : "<<str.max_size()<<endl;
    cout<<"str.clear()"<<endl;
    cout<<"str.length() : "<<str.length()<<endl;

    if(str.empty())
    {
        cout<<"it is empty"<<endl;
    }
    else
    {
        cout<<"String is : "<<str<<endl;
    }

    
}
