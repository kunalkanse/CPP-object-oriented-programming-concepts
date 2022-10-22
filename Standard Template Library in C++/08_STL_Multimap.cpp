#include<iostream>
#include<map>
#include<string>
using namespace std;

// multimap contains sorted key-value pairs
// multimap can have duplicate key-value pairs

int main()
{
    multimap<int,string> mm1 = { {213,"kunal"} , {100,"shreyash"} , {100,"suyash"} , {658,"ashutosh"} };

    multimap<int,string>::iterator ptr = mm1.begin();

    for(ptr ; ptr != mm1.end() ; ptr++)
    {
        cout<< ptr->first <<"  ";  //for printing the map key

        cout<< ptr->second <<endl;    // for printing value
    }

    cout<<"\nnumber of pairs in mm : "<<mm1.size()<<endl;
    cout<<endl<<endl;

    //mm1[100] = "kunal"  // cant alter in multimap

    //insert
    mm1.insert(pair<int,string>(234,"kunal"));
    mm1.insert(make_pair(456,"raju"));

    for(ptr = mm1.begin() ; ptr != mm1.end() ; ptr++)
    {
        cout<< ptr->first <<"  ";  //for printing the map key

        cout<< ptr->second <<endl;    // for printing value
    }

    cout<<"\nnumber of pairs in mm : "<<mm1.size()<<endl;
    cout<<endl;

    cout<<"count of 100 : "<<mm1.count(100)<<endl;

    //mm1.erase(ptr);
    //mm1.swap(mm2);

    //mm1.clear();    // delete all pairs

    return 0;

}