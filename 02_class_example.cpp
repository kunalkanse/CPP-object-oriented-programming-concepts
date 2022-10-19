
#include<iostream>
using namespace std;

class PersonDetails
{
    public:
        char name[15];
        int age;

    public:
        void getData()
        {
            cout<<"Enter name of person : ";
            cin.getline(name,15);

            cout<<"Enter the age of person : ";
            cin>>age;
        }

        void Display()
        {
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age;
        }
};

int main()
{
    PersonDetails pd;

    pd.getData();
    pd.Display();

    return 0;
}