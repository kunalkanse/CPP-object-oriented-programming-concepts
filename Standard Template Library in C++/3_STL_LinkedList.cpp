#include<iostream>

#include<list>
using namespace std;

int main()
{

    list<int>list1 = {10,20,30};
    list<int>list2;

    list<int>::iterator ptr = list1.begin();

///////////////////////////////////////////////
    list1.insert(ptr,40);

    for(ptr = list1.begin() ; ptr != list1.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;
///////////////////////////////////////////////
    list1.push_back(50);
    list1.push_front(60);

    for(ptr = list1.begin() ; ptr != list1.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;

/////////////////////////////////////////////////
    list1.pop_back();
    list1.pop_front();

    for(ptr = list1.begin() ; ptr != list1.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;

//////////////////////////////////////////////////
    list1.sort();
    list1.reverse();

    for(ptr = list1.begin() ; ptr != list1.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;

///////////////////////////////////////////////////
    int i = list1.size();
    cout<<"size of list : "<<i<<endl;


///////////////////////////////////////////////////
    list1.merge(list2);
    
    for(ptr = list1.begin() ; ptr != list1.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }
    cout<<endl;


    return 0;
}