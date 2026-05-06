#include <iostream>

using namespace std;

class Students
{
public:
    string name;
    int roll;

    // Default constructor
    Students()
    {
        name = "Your Name Please";
        roll = 0;
    }

    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
    }
};

int main()
{
    Students s1;
    s1.show();
    return 0;
}