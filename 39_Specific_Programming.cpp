#include<iostream>
using namespace std;


class Array
{
	public:
		int *Arr;
		int size;
		
		Array(int);
		~Array();
		void Accept();
		void Display();
		
	
};

Array::Array(int length = 10)
	{
		size = length;
		Arr = new int[size];
	}
	
Array::~Array()
	{
		delete[]Arr;
	}
	
void Array::Accept()
	{
		int i = 0;
		cout<<"Enter elements : \n";
		
		for(i = 0; i < size ; i++)
		{
			cin>>Arr[i];
		}
	}
	
void Array::Display()
	{
		int i = 0;
		cout<<"Elemets are : \n";
		for(i= 0;i < size ;i++)
		{
			cout<<Arr[i]<<"\n";
		}
	}

int main()
{
	Array obj(5);
	obj.Accept();
	obj.Display();
		
	return 0;
}
