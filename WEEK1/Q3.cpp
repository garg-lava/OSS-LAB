#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, reversed;
    // Input string from user
    cout << "Enter a string: ";
    getline(cin, str); // Using getline to allow for spaces in input
    // Reverse the string
    int length = str.length();
    for (int i = length - 1; i >= 0; i--)
    {
        reversed += str[i];
    }
    // Print the reversed string
    cout << "Reversed string: " << reversed << endl;
    return 0;
}