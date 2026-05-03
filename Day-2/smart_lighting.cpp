/*
Problem 13: Smart Home Lighting System
Take time (day/night) and motion input.
Decide lighting: OFF, DIM, or FULL brightness.
*/

#include <iostream>
using namespace std;

int main()
{
    string time;
    bool motion;

    cin >> time >> motion;

    if (time == "Night" || time == "night")
    {
        if (motion)
            cout << "Full Brightness";
        else
            cout << "Dim Mode";
    }
    else
    {
        cout << "Lights OFF";
    }

    return 0;
}