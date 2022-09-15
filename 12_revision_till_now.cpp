#include<iostream>
using namespace std;

class Demo
{
    private:
        int *ptr;
        int size;

    public:

        Demo(int no = 5)    //default parameterised constructor
        {
            size = no;
            ptr = new int[no];  //array dynamic
        }

        Demo(Demo &ref) //copy constructor
        {
            cout<<"\nCopy Constructor called\n";
            size = ref.size;
            ptr = new int[size];

            cout<<"copying elements of obj in obj1\n";
            for(int i = 0; i < size; i++)
            {
                ptr[i] = ref.ptr[i];
            }

            cout<<"Deep copy successfully created\n";
        }

        ~Demo()
        {
            cout<<"Destructor\n";
            delete []ptr;
        }

        void accept()
        {
            int i = 0;

            cout<<"\nEnter the data in array : \n";
            for(i = 0; i < size ; i++)
            {
                cin>>ptr[i];    // *(ptr + i)
            }
        }

        void display()
        {
            
            for(int i = 0; i < size ; i++)
            {
                cout<<"|"<<ptr[i]<<"|"<<"\t";
            }

            cout<<"\n\n";
        }
};

int main()
{
    int value = 0;

    cout<<"\nEnter how many elements you want : ";
    cin>>value;

    Demo *obj = new Demo(value);
    
    obj->accept();

    cout<<"\ndata in obj : \n";
    obj->display();

    Demo obj1(*obj);    //copy constructor called

    cout<<"\ndata in obj1 : \n";
    obj1.display();

    delete obj;


    return 0;
}