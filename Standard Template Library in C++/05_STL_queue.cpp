#include<iostream>

#include<queue>
using namespace std;

int main()
{
    queue<int>queue1;

    queue1.push(10);
    queue1.push(20);
    queue1.push(30);

    cout<<"Front elements : "<<queue1.front()<<endl;
    cout<<"back elements : "<<queue1.back()<<endl;

    queue1.pop();
    cout<<"Front elements : "<<queue1.front()<<endl;

    int i = queue1.size();
    cout<<i;


    return 0;
}