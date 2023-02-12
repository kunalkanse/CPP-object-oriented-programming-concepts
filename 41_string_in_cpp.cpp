#include<iostream>
using namespace std;

int main()
{
    char s[20];
    char str[20];
    
/*  
    cout<<"Enter your name : "<<endl;
    cin>>s;

    cout<<"Welcome "<<s<<endl;  // prints string till space
*/

/*

    // problematic code
    // uncomment , run & demonstrate

    cout<<"Enter your name : "<<endl;
    cin.get(str,20);                // accept string till enter
    cout<<"Welcome "<<str<<endl;

    cout<<"Enter your name : "<<endl;
    cin.get(s,20);                  // prints enter(\n)
    cout<<"Welcome "<<s<<endl;

    // solution : use "cin.ignore" between calls

*/

    cout<<"Enter your name : "<<endl;
    cin.getline(str,20);
    cout<<"Welcome "<<str<<endl;

    cout<<"Enter your name : "<<endl;
    cin.getline(s,20); 
    cout<<"Welcome "<<s<<endl;

    return 0;
}
