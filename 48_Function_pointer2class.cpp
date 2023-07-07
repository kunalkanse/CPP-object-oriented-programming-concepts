/*
		THIS PROGRAM ILLUSTRATES ABOUT :
			the concept of function pointer...
*/
#include<iostream>

using namespace std;

class demo
{
	public:
		void run(int x)
		{
			cout<<"Inside function run of class demo"<<endl;
		}
};

int fun(int x, int y)
{
	cout<<"Inside function fun which accept two integers and return integer"<<endl;
	return 0;
}

int gun(int x, int y)
{
	cout<<"Inside function gun which accept two integers and return integer"<<endl;
	return 0;
}

int main()
{
// 	Creating function pointer for function fun
// 	funptr is a pointer to function which accept two integers and both are integers and returns integer...

	int (*funptr)(int,int);

// 	Assigning address of function to the function pointer
	funptr = fun;

// 	Calling the function using function pointer
	funptr(10,20);

// 	Reassigning address of function gun() to same pointer
	funptr = gun;
	funptr(10,20);

// 	Creating function pointer for member function of class
// 	fp is a pointer to function which accepts address of function which 
// 		is member function of demo class and which accept one integer and return integer.

	void (demo::*fp) (int);

	demo dobj;

	fp = &demo::run;	// storing address of run...

	// We can call member function in this way...
	(dobj.*fp)(10);

	return 0;
}
