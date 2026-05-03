/*
Problem 6: continue Statement
Write a C++ program that takes N as input.
Print numbers from 1 to N, skipping multiples of 3 using continue.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            continue;
        cout << i << " ";
    }

    return 0;
}