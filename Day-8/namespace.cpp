#include <iostream>
using namespace std;

namespace Virat
{
    int r = 18;
    void show() 

    {

        cout << "Virat Kohli is the part of RCB" << r << endl;
    }
}

namespace Rohit
{
    void show()
    {
        cout << "Rohit Sharma is the part of Mi" << endl;
    }
}

int main()
{
    Virat::show();
    Rohit::show();
    return 0;
}