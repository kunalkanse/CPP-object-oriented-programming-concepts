#include<iostream>
#include<map>
#include<string>
using namespace std;

//map contains sorted KEY-VALUE pair
//each key is unique (we can insert/delete , can alter)

int main()
{
    map <int,string> map1 = { {101,"kunal"} , {465,"shreyash"} , {312,"suyash"} , {4,"ashutosh"} };

    map <int , string> map2;

    //insert
    map1[4] = "hrutik";

    map<int,string>::iterator ptr = map1.begin();

    for(ptr ; ptr != map1.end() ; ptr++)
    {
        cout<< ptr->first <<" , ";  //for printing the map key

        cout<< ptr->second <<endl;    // for printing value
    }

    // at() 
    cout<<"\nmap1.at(465) : "<<map1.at(465)<<endl;
    cout<<"map1[465] : "<<map1[465]<<endl;

    int i = map1.size();
    cout<<"number of elements : "<<i<<endl<<endl;

    // change value using at()
    map1.at(312) = "shubham";


///////////////////////////////////////////////////////////////
    for(ptr = map1.begin() ; ptr != map1.end() ; ptr++)
    {
        cout<< ptr->first <<" , ";  //for printing the map key

        cout<< ptr->second <<endl;    // for printing value
    }
////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////

    map1.insert(pair<int,string>(318,"sani"));
    map1.insert(make_pair(978,"onkar"));

    i = map1.size();
    cout<<"\nnumber of elements : "<<i<<endl;

    cout<<endl;
    cout<<"\ninsert elements in sorted order\n"<<endl;
    
    for(ptr = map1.begin() ; ptr != map1.end() ; ptr++)
    {
        cout<< ptr->first <<" , ";  //for printing the map key

        cout<< ptr->second <<endl;    // for printing value
    }
/////////////////////////////////////////////////////////////////
    cout<<endl<<endl;
/////////////////////////////////////////////////////////////////

    ptr = map1.begin();

    map1.erase(ptr);

    for(ptr = map1.begin() ; ptr != map1.end() ; ptr++)
    {
        cout<< ptr->first <<" , ";  //for printing the map key

        cout<< ptr->second <<endl;    // for printing value
    }

    i = map1.size();
    cout<<"number of elements : "<<i<<endl;

    return 0;
}