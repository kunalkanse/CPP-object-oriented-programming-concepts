#include<iostream>
#include<unordered_set>   // Include the header
using namespace std;

int main()
{
	unordered_set <int> uset1;
	unordered_set <int> uset2 = { 1,3,2,1,4,5,6,7,1,2 };

	for (unordered_set<int>::iterator i = uset2.begin(); i != uset2.end(); i++)
	{
		cout << *i << " ";
	}

	//insert
	uset2.insert(9);

	//erase
	unordered_set<int>::iterator del = uset2.begin();
	uset2.erase(del);  // iterator
	 
	uset2.erase(2);    // value

	uset2.erase(uset2.begin(), uset2.find(5));   //range 
	// delete from start -> end -1

	cout << endl;
	//check
	for (unordered_set<int>::iterator i = uset2.begin(); i != uset2.end(); i++)
	{
		cout << *i << " ";
	}

	//swap
	uset1.swap(uset2);

	//size
	cout << endl << "Size uset1 : " << uset1.size();
	cout << endl << "Size uset2 : " << uset2.size();

	return 0;
}