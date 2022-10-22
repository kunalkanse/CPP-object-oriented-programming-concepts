#include<iostream>
#include<string>
#include<set>   // Include the set header

using namespace std;

int main()
{
	set<int> set1 = { 10,20,10,30,40,50,20 };   
    // set<int, greater<int>>
	// set<int, less<int>>  default

	for (set<int>::iterator i = set1.begin(); i != set1.end(); i++)
	{
		cout << *i << " ";   // for printing the
	}

	//insert()
	set1.insert(90);
	set1.insert(50);
	set1.insert(60);

	cout << endl;
	for (set<int>::iterator i = set1.begin(); i != set1.end(); i++)
	{
		cout << *i << " ";   // for printing the
	}

	return 0;
}