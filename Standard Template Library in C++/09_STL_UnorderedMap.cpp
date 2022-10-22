#include<iostream>
#include<string>
#include<unordered_map>   // Include the header
using namespace std;

int main()
{
	unordered_map <int, string> umap1;
	unordered_map <int, string> umap2 = { {101, "Vedinesh"}, {201, "Tim"}, {201, "Faran"} };
    // dont allow duplicates

	unordered_map <int, string>::iterator i = umap2.begin();
	for (i; i != umap2.end(); i++)
	{
		cout << i->first << " ";
		cout << i->second << endl;
	}
	cout << endl;


	//alter
	umap2[201] = "Kevin";            // can be done

	cout << endl << "value at(201) " << umap2.at(201);
	cout << endl << "value [201] " << umap2[201] << endl << endl;

	//insert:- insert key,value
	umap2.insert(pair<int, string>(106, "Amit"));
	umap2.insert(make_pair(208, "Hina"));

	//check
	for (unordered_map<int, string>::iterator i = umap2.begin(); i != umap2.end(); i++)
	{
		cout << i->first << " ";   // for printing the map KEY

		cout << i->second << endl;   // for printing Value
	}
	cout << endl;

	//erase(): remove entry in map pointed by iterator
	unordered_map<int, string>::iterator del = umap2.begin();
	umap2.erase(del);

	//check
	for (unordered_map<int, string>::iterator i = umap2.begin(); i != umap2.end(); i++)
	{
		cout << i->first << " ";   // for printing the map KEY

		cout << i->second << endl;   // for printing Value
	}
	cout << endl;

	// swap
	// mmap1.swap(mmap2);

	//clear : Delete all the elements in unordered_map.

	//count : Return number of elements matching with given key.
	cout << "Count No of 201 : " << umap2.count(201) << endl;

	// size : Returns the number of elements in the unordered_map.
	cout << "No of Elements : " << umap2.size() << endl;
	return 0;
}