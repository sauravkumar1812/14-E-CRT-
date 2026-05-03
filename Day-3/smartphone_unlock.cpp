/*
Problem 8: Smartphone Unlock
Write a program that repeatedly asks for a passcode.
Use do-while loop and unlock only when correct passcode is entered.
*/

#include <iostream>
using namespace std;

int main()
{
    int passcode;

    do
    {
        cin >> passcode;
    } while (passcode != 1111);

    cout << "Phone Unlocked!";
    return 0;
}