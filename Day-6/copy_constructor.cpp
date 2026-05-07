#include <iostream>

using namespace std;
class Cricketers
{
public:
    string name;
    int runs;

    // Parameterized constructor
    Cricketers(string n, int runs)
    {
        name = n;
        this->runs = runs;
    }

    // copy constructor
    Cricketers(Cricketers &c)
    {
        name = c.name;
        runs = c.runs;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Runs: " << runs << endl;
    }
};

int main()
{

    Cricketers c1("Virat kohli ", 12000);
    c1.show();
    Cricketers c2(c1);
    c2.show();
    return 0;
}