#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// without the recursion
bool check_palindrome(string s)
{

    int n = s.size();
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

// with recursion
bool checkpalindrome(string str, int i, int j)
{
    // base case
    if (i > j)
    {
        return true;
    }

    if (str[i] != str[j])
    {
        return false;
    }

    return checkpalindrome(str, i + 1, j - 1);
}

// for interger - without recursion
bool checkPalindrome(int n)
{
    int temp = n;
    int reverse = 0;
    while (temp)
    {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }
    if (reverse == n)
    {
        return true;
    }
    return false;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Iterative string palindrome check
    cout << (check_palindrome(s) ? "Palindrome (Iterative)" : "Not a palindrome (Iterative)") << endl;

    // Recursive string palindrome check
    cout << (checkpalindrome(s, 0, s.size() - 1) ? "Palindrome (Recursive)" : "Not a palindrome (Recursive)") << endl;

    // Integer palindrome check
    cout << (checkPalindrome(n) ? "Palindrome (Integer)" : "Not a palindrome (Integer)") << endl;

    return 0;
}
