#include<iostream>
#include<bits/stdc++.h>
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

// Function to check if a string is a palindrome (recursive)
bool isPalindrome(const string& str, int i, int j) {
    if(i >= j) return true; // Base case: checked all pairs
    if(str[i] != str[j]) return false; // Mismatch found
    return isPalindrome(str, i + 1, j - 1); // Check next pair
}


int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Original string: " << str << endl;

    // Palindrome check (iterative)
    if (check_palindrome(str)) {
        cout << str << " is a palindrome string." << endl;
    } else {
        cout << str << " is not a palindrome string." << endl;
    }

    // Palindrome check (recursive)
    if (isPalindrome(str, 0, str.size() - 1)) {
        cout << "(Recursive) " << str << " is a palindrome string." << endl;
    } else {
        cout << "(Recursive) " << str << " is not a palindrome string." << endl;
    }

    return 0;
}