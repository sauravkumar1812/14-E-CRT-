/*
Problem 10: Alphabet Case Checker
Write a C++ program that takes a character as input.
Determine whether it is uppercase, lowercase, or not an alphabet. 
Use relational operators to check the character range and print the appropriate message.
*/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;

    bool isUpper = (ch >= 'A' && ch <= 'Z');
    bool isLower = (ch >= 'a' && ch <= 'z');

    cout << "Uppercase: " << isUpper << endl;
    cout << "Lowercase: " << isLower << endl;
    cout << "Not a letter: " << !(isUpper || isLower) << endl;

    return 0;
}