/*
Problem 4: Nested if Statements
Write a C++ program that takes three integers as input.
Use nested if statements to find and print the largest number.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b)
    {
        if (a >= c)
        {
            cout << a;
        }
        else
        {
            cout << c;
        }
    }
    else
    {
        if (b >= c)
        {
            cout << b;
        }
        else
        {
            cout << c;
        }
    }

    return 0;
}