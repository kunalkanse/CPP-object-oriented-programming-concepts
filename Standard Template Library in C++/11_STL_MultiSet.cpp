#include<iostream>
#include<set>   // Include the header
using namespace std;

int main()
{
	multiset <int> mset1;
	multiset <int> mset2 = { 1,3,2,1,4,5,6,7,1,2 };

	for (multiset<int>::iterator i = mset2.begin(); i != mset2.end(); i++)
	{
		cout << *i << " ";
	}

	//insert
	mset2.insert(9);

	//erase
	multiset<int>::iterator del = mset2.begin();
	mset2.erase(del);  // iterator
	 
	mset2.erase(2);    // value

	mset2.erase(mset2.begin(), mset2.find(5));   //range 
	// delete from start -> value 5

	cout << endl << endl;
	//check
	for (multiset<int>::iterator i = mset2.begin(); i != mset2.end(); i++)
	{
		cout << *i << " ";
	}

	//swap
	mset1.swap(mset2);

	//size
	cout << endl << "Size uset1 : " << mset1.size();
	cout << endl << "Size uset2 : " << mset2.size();

	return 0;
}