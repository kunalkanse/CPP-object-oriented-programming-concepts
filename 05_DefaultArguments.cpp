#include<iostream>
using namespace std;

class Demo
{
    public:
        float Area1(float fradius, float fpi)
        {
            return fpi * fradius * fradius;
        }

        float Area2(float fradius, float fpi = 20)
        {
            return fpi * fradius * fradius;
        }
};

int main()
{
    float fvalue1 = 0.0,fvalue2 = 0.0,fret = 0.0;

    cout<<"Enter value of radius: ";
    cin>>fvalue1;

    cout<<"Enter value of pi: ";
    cin>>fvalue2;

    Demo obj;

    fret = obj.Area1(fvalue1,fvalue2);
    cout<<"Area of circle is :"<<fret<<"\n";

    fret = obj.Area2(fvalue1);
    cout<<"Area of circle is :"<<fret<<"\n";

    cout<<"size of obj : "<<sizeof(obj)<<" byte";

    return 0;


}