/*
Problem 14: ATM Withdrawal Validator
Validate withdrawal based on balance, limit, and multiples of 100.
*/

#include <iostream>
using namespace std;

int main()
{
    double balance = 50000;
    double limit = 20000;
    int amount;

    cin >> amount;

    if (amount % 100 != 0)
        cout << "Invalid amount";
    else if (amount > limit)
        cout << "Exceeds limit";
    else if (amount > balance)
        cout << "Insufficient balance";
    else
    {
        balance -= amount;
        cout << "Remaining: " << balance;
    }

    return 0;
}