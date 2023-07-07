/* 
   THE FOLLOWING PROGRAM WILL ILLUSTRATES :
	   THE USE OF REFERENCE VARIABLE FROM C++...
*/

#include<iostream>

using namespace std;

int main()
{
//	entry-point function defination goes from here...
//	Creating reference variable...

	int i = 10;			// integer is declared...
	int &ref1 = i;		// 'ref1' is the another name for 'i'

	// 	'ref1' and 'i' both are pointing to same address location of 4 bytes...
//sizeof(reference_var)=sizeof(original_variable)
	cout<<"\nValue of i is :"<<i<<"\n Value of ref1 is :"<<ref1<<endl;

	cout<<"\nincrementing value through reference variable\n";
	ref1++;				// 'i' also get incremented..
	cout<<"\nValue of i is "<<i<<endl;

	cout<<"Address of reference variable and referred variable is always same\n";
	cout<<"\nAddress of i is "<<&i<<"\nAddress of reference variable is "<<&ref1<<endl;


//	References must be initialized at the time of declaration...

	int k = 10;
//	int &ref;
//	ref = k		// 'ERROR'


// Creating reference to reference to reference... (at any level)

	int j = 20;
	int &ref2 = j;
	int &ref3 = ref2;
	int &ref4 = ref3;

// All this reference variables will get same address LOCATION...

	cout<<"Address of j "<< &j<<endl<<"Address of ref2 "<< &ref2<<endl;
	cout<<"Address of ref3 "<< &ref3<<endl<<"Address of ref4 "<< &ref4<<endl;


// 	Creating multiple references to single variable 'x'

	int x = 10;
	int &ref5 = x;
	int &ref6 = x;
	int &ref7 = x;
	//	'x' can be identified by 'ref5', 'ref6' and 'ref7'...
//UPDATE
// creating pointer to reference

	int y = 20;
	int &ref8 = y;
	int *p = &ref8;		// 'p' is indirectly pointing to 'y' only...
	cout<<"Reffered value through pointer is "<<*p<<endl;

// Creating reference to pointer

	int z = 20;
	int *q = &z;
	int *(&ref9) = q;	// 'ref9' is a reference WHICH IS CURRENTLY REFERING TO THE INTEGER POINTER Q...

cout<<"Value from pointer is "<<*q<<endl;
cout<<"Value from reference pointer is "<<*ref9<<endl;

//	Creating array of references is not allowed
	//	int &arr[10];		// Error : INVALID


//	Creating reference to an array is allowed
	int arr[] = {10,20,30,40};

	int (&refarr)[4] = arr;
	//int &refarr[4] = arr;

// int (&refarr)[ ] = arr; is not allowed , we have to provide the size for the array...

	return 0;
}
