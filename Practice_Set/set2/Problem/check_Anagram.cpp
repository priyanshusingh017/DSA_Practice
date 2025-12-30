#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Method 1: Check anagram by sorting both strings
bool checkAnagram(string s1, string s2) {
    // If lengths are not equal, they can't be anagrams
    if (s1.size() != s2.size()) {
        return false;
    }
    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Compare sorted strings
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

// Method 2: Check anagram using frequency map
bool Checkanagram(string s1, string s2) {
    // If lengths are not equal, they can't be anagrams
    if (s1.size() != s2.size()) {
        return false;
    }
    unordered_map<char, int> freq;
    // Count frequency of each character in s1
    for (auto c : s1) {
        freq[c]++;
    }
    // Subtract frequency using characters from s2
    for (auto c : s2) {
        freq[c]--;
    }
    // If all frequencies are zero, they are anagrams
    for (auto i : freq) {
        if (i.second != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;

    // Using sorting method
    if (checkAnagram(str1, str2)) {
        cout << "Anagram (by sorting method)" << endl;
    } else {
        cout << "Not an Anagram (by sorting method)" << endl;
    }

    // Using frequency map method
    if (Checkanagram(str1, str2)) {
        cout << "Anagram (by frequency map method)" << endl;
    } else {
        cout << "Not an Anagram (by frequency map method)" << endl;
    }

    return 0;
}