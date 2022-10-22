#include<iostream>

#include<vector>
using namespace std;

//array are static in nature(size cant be change at run time)
// vector are like dynamic arrays

int main()
{
    vector<int>vec1;
    cout<<"size : "<<vec1.size()<<endl;

    vector<int>vec2 = {10 ,20 ,30};
    cout<<"size : "<<vec2.size()<<endl;
    cout<<"capacity : "<<vec2.capacity()<<endl;

    //accessing using at() method
    cout<<"\nvec2.at(2) : "<<vec2.at(2)<<endl;

    //accessing using by using []
    cout<<"vec2[2] : "<<vec2[2]<<endl;

    //when we use at() method and we give index out of bound then 
    // it throws exception but in case of [] program directly gets terminated
    // so at() is more safe than []

    // push_back() method - insert elements at end
    vec2.push_back(40);
    vec2.push_back(50);
    vec2.push_back(60);

    cout<<"\nvec2.at(4) : "<<vec2.at(4)<<endl;
    cout<<"size : "<<vec2.size()<<endl;

    cout<<"\ndeclaring itertor to a vector to travel"<<endl;
    vector<int>::iterator ptr;

    for(ptr = vec2.begin() ; ptr < vec2.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }

    cout<<"\ndemonstrate the dynamic nature of vector"<<endl;
    cout<<"capacity : "<<vec2.capacity()<<endl;
    vec2.push_back(70);
    vec2.push_back(80);

    for(ptr = vec2.begin() ; ptr < vec2.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }

    vec2.pop_back();
    cout<<"\n\nAfter removed last element\n";

    for(ptr = vec2.begin() ; ptr < vec2.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }
    
    cout<<endl;
    //insert() - insert elements before position pointed by iterator
    vector<int> :: iterator ptr2 = vec2.begin() + 2;
    vec2.insert(ptr2,500);

    cout<<"\ninsert() : ";
    for(ptr = vec2.begin() ; ptr < vec2.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }

    //erase() - erase elements between position pointed by iterator
    vec2.erase(vec2.begin()+2,vec2.end()-6);
    cout<<"\nerase() : ";
    for(ptr = vec2.begin() ; ptr < vec2.end() ; ptr++)
    {
        cout<<*ptr<<" ";
    }

    //vec1.swap(vec2);

    return 0;

}