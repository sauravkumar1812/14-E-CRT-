#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str1 = "Hello";
    string str2 = "Jecrc";
    cout << str1 << " " << str2 << endl;
    // methods of String
    // 1 Length of String
    int n = str1.length();
    cout << "Length of String is:" << n << endl;
    // 2 Append String
    cout << "After Appending String is:" << str1.append("Students") << endl;
    // 3 emptyString
    cout << "Is String Empty:" << str2.empty() << endl;
    // 4 Concatination of String
    cout << "After Concatination of String is:" << str1 + "Bacho" << endl;
    cout << "After Concatination of String is 2:" << str1 << endl;
    // push_back() method
    str2.push_back('U');
    cout << "After push_back() method:" << str2 << endl; // JecrcU
    // pop_back() method
    str2.pop_back();
    cout << "After pop_back() method:" << str2 << endl; // Jecrc

    // find() method
    int index = str1.find("ello");
    cout << "Index of 'ello' in str1:" << index << endl;

    // at method. str1[1];
    char ch = str1.at(1);
    cout << "Character at index 1 in str1:" << ch << endl;
    // swap() method
    str1.swap(str2);
    cout << "After swapping str1 and str2:" << endl;
    cout << "str1: " << str1 << endl; // Jecrc
    cout << "str2: " << str2 << endl; // Hellostudents
    // substr() method
    string subStr = str2.substr(5, 6); // 5 is index and 6 is total length of substring
    cout << "Substring of str2 from index 5 with length 6:" << subStr << endl;
    // getline() method
    string str3;
    cin >> str3;
    // getline(cin, str3);
    cout << "You entered: " << str3 << endl;

    return 0;
}