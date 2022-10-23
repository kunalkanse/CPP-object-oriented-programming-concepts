#include<iostream>
using namespace std;

void test(int x)
{
    try
    {
        if(x == 0) throw x;
        if(x == -1) throw 'x';
        if(x == 1) throw 1.1;
    }

    catch(...)  // Generic catch
    {
        cout<<"Exception caught\n";
    }
}

int main()
{

    test(0);
    test(-1);
    test(1);

    return 0;
}