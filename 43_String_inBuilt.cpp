#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str1[50] = "Programming";
    char str2[20] = "gram";
    char str3[20] = "programming";
    char str4[20];

    if((strstr(str1,str2)) != NULL)
        cout<<"\nstrstr() : "<<strstr(str1,str2)<<endl;
    else
        cout<<"not found"<<endl;

    cout<<"\nstrchr() : "<<strchr(str1,'a')<<endl;    //prints string from first occurence of character

    //cout<<"\nstrrchr() : "<<strchr(str1,'a')<<endl;   //check occurence from right side

    // based on ascii value
    if((strcmp(str1,str3)) == 0)
    {
        cout<<"\nst1 = str3";
    }
    else if((strcmp(str1,str3)) > 0)
    {
        cout<<"\nst1 > str3";
    }
    else if((strcmp(str1,str3)) < 0)
    {
        cout<<"\nst1 < str3";
    }

}
