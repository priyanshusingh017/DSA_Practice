#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Program to check if a year is a leap year
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // Leap year if divisible by 4 and (not divisible by 100 or divisible by 400)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
