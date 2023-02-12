#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str1[50] = "Hello";
    char str2[20];
    char str3[20];
    char str4[20];

    cout<<"\nsize of str1 : "<<strlen(str1)<<endl;

/*
    cout<<"Enter the string : ";
    cin>>str2;
    cout<<"size of str2 : "<<strlen(str2)<<endl;    // only till spaces
*/

    cout<<"Enter the string : ";
    cin.getline(str3,20);
    cout<<"size of str2 : "<<strlen(str3)<<endl;    // only till spaces

/////////////////////////////////////////////////////////////
    strcat(str1,str3);
    cout<<"\nstrcat() : "<<str1<<endl;

    strncat(str1,str3,2);
    cout<<"\nstrncat() : "<<str1<<endl;
/////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
    strcpy(str2,str3);
    cout<<"\nstrcpy() : "<<str2<<endl;

    strncpy(str4,str3,2);
    cout<<"strncpy() : "<<str4<<endl;

///////////////////////////////////////////////////////////////
}
