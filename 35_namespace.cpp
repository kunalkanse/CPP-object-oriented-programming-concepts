#include<iostream>

//using namespace std;

namespace Marvellous
{
    class Demo
    {
        public:
            int i,j;
    };
}

namespace Infosystems
{
    class Demo
    {
        public:
            int i,j;
    };
}

using namespace Infosystems;

int main()
{
    Marvellous::Demo obj1;  // withous using keyword

    Demo obj2;  // with using keyword for namespace infosystems

    std::cout<<"inside main\n";

    return 0;
}