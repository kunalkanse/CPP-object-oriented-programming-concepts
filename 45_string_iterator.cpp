#include<iostream>
using namespace std;

int main()
{
    string str;

    cout<<"Enter the string : ";
    getline(cin,str);

    for(int i = 0; str[i] != '\0' ; i++)
    {
        cout<<str[i];
    }

    cout<<endl;
    
    string::iterator it1;

    for(it1 = str.begin() ; it1 != str.end() ; it1++)
    {
        cout<<*it1;
    }
    cout<<endl;

    string::iterator it2;
    
    for(it2 = str.begin() ; it2 != str.end() ; it2++)
    {
        *it2 = *it2-32;
        cout<<*it2;
    }

    cout<<endl;
    
    string::reverse_iterator it3;
    
    for(it3 = str.rend() ; it3 != str.rbegin() ; it3--)
    {
        cout<<*it3;
    }

    return 0;
}
