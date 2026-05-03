/*
Problem 11: Age Group Classifier
Write a program that takes age as input.
Check if the person is eligible for a discount (age < 12 or ≥ 65)
 and if they belong to the working age group (18–64).
*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    bool discount = (age < 12) || (age >= 65);
    bool working = (age >= 18) && (age <= 64);

    cout << "Discount Eligible: " << discount << endl;
    cout << "Working Age: " << working << endl;

    return 0;
}