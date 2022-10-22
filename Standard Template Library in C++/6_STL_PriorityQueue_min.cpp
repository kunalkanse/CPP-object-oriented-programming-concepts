#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue <int , vector<int>, greater<int> > pq1;
    // greater means we are replecating the min heap

    pq1.push(40);
    pq1.push(20);
    pq1.push(80);
    pq1.push(60);
    // in normal queue element are arranged as 40->20->80->60
    // but in priority queue element are arranged in ascending order sa 20->40->60->80

    cout<<"pq1.top() : "<<pq1.top()<<endl; 
    cout<<"pq1.size() : "<<pq1.size()<<endl;

    pq1.pop();

    cout<<"new pq1.top() : "<<pq1.top()<<endl; 
    cout<<"pq1.size() : "<<pq1.size()<<endl;

    //pq1.swap(pq2;)

    return 0;

}