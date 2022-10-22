#include<iostream>

#include<stack>
using namespace std;

int main()
{
    stack<int>stack1;

    stack1.push(10);
    stack1.push(20);
    stack1.push(30);

    cout<<"stack1.size() : "<<stack1.size()<<endl; 
    cout<<"stack1.top() : "<<stack1.top()<<endl;

    stack1.pop();

    cout<<"new stack1.top() : "<<stack1.top()<<endl;
    cout<<"stack1.size() : "<<stack1.size()<<endl; 

    return 0;
}