#include<iostream>

using namespace std;

int main()
{
// By using typedef we are assigning a new name to as existing data types

// Creating typedef for premitive data types

// Integer is a new type which is same as int
	typedef int Integer;
	Integer i;

	// Floating_Point is a new type which is same as float
	typedef float Floating_Point;
	Floating_Point f;

	// Character is a new type which is same as char
	typedef char Character;
	Character c;

// Creating typedef for user defined data types

// New_Struct is new type which is same as struct demo
	typedef struct demo
	{
		int i;
		char c;
	}New_Struct;

	New_Struct obj;// This statement is same as struct demo obj;

	struct Hello
	{
		int i;
	};

// We can also create typedef for struct in this way also
	typedef struct Hello New_Hello;

	New_Hello hobj;

// We can also skip name of structure while creating typedef
	typedef struct
	{
		int i;
		char c;
	}New_Unnamed;

	New_Unnamed uobj;

// In this case we are creating two new type names for the structure.
	typedef struct
	{
		int i;
		char c;
	}New_Unnamed1,NewUnamed2;

// Sptr is a new type which is a pointer to structure fun.
	typedef struct fun
	{
		int i;
		char c;
	}*Sptr;

	// s is a pointer which stores address of struct fun
	Sptr s = new fun;

// typedefs are generally used to avoid typing of complicated datatypes
	typedef unsigned long int * New_Type;

// t is a pointer to unsigned long integer
	New_Type t;

// Creating typedef for function pointers.
// fptr is a new data type which is a pointer
// to function which accept two integers and
// return integer.

	typedef int(*fptr)(int , int);

	fptr fp;

	return 0;
}

// This is typedef for a class which is similar as typedef for struct
typedef class
{
public:
	int i;

}demo;
