#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;
    int n;
    double sum = 0.0, average;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
        sum += num;
    }
    // Calculate the average
    average = sum / n;
    // Print the average
    cout << fixed << setprecision(2);
    cout << "Average of the " << n << " integers is: " << average << endl;
    return 0;
}