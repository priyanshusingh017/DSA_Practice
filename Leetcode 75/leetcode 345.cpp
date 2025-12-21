#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s)
{
    string s1 = "aeiouAEIOU"; // vowels set (both cases)
    int i = 0, j = s.size() - 1;
    string word = s; // work on a copy, return the transformed string
    while (i < j)
    {
        // Advance i to next vowel
        while (i < j && s1.find(word[i]) == string::npos)
        {
            i++;
        }
        // Advance j to previous vowel
        while (i < j && s1.find(word[j]) == string::npos)
        {
            j--;
        }
        // Swap only if pointers haven't crossed
        if (i < j)
        {
            swap(word[i], word[j]);
            i++;
            j--;
        }
    }

    return word;
}
// Helper: returns true if character is a vowel (case-insensitive)
bool vowels(char c)
{
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' 
    || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
// Alternative implementation: two-pointer with explicit is-vowel helper.
// Move pointers until they land on vowels, then swap and continue.
string reversevowels(string s)
{

    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (!vowels(s[i]))
            i++;
        if (!vowels(s[j]))
            j--;
        if (vowels(s[i]) && vowels(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    return s;
}

int main()
{
    string s = "leetcode"; // Expected output: "leotcede"
    cout << reversevowels(s) << endl;
    return 0;
}