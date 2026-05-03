/*
Problem 10: ATM PIN Retry System
Write a program that allows up to 3 attempts to enter correct PIN.
Block access if all attempts fail.
*/

#include <iostream>
using namespace std;

int main()
{
    int pin, attempts = 0;

    do
    {
        cin >> pin;
        attempts++;

        if (pin == 1234)
        {
            cout << "Access Granted";
            break;
        }
        else if (attempts < 3)
        {
            cout << "Try Again";
        }
        else
        {
            cout << "Card Blocked";
        }

    } while (attempts < 3);

    return 0;
}