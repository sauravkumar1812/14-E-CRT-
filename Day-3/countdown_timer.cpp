/*
Problem 9: Countdown Timer
Write a C++ program that takes a starting number as input.
Print countdown to 1 and display "Blastoff!".
*/

#include <iostream>
using namespace std;

int main()
{
    int start;
    cin >> start;

    for (int i = start; i >= 1; i--)
    {
        cout << i << " ";
    }

    cout << "Blastoff!";
    return 0;
}