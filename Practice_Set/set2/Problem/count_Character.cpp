#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Function to count all characters in the string (including spaces and symbols)
int countAllCharacters(const string& str) {
    return str.length();
}

// Function to count occurrences of a specific character in the string
int countSpecificChar(const string& str, char target) {
    int count = 0;
    for (char c : str) {
        if (c == target) {
            count++;
        }
    }
    return count;
}

// Function to count only alphabetic letters in the string
int countLetters(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isalpha(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    string input;
    char targetChar;

    // Prompt user for input string
    cout << "Enter a string: ";
    getline(cin, input);

    // Prompt user for the character to count
    cout << "Enter a character to count: ";
    cin >> targetChar;

    // Count and display total characters
    cout << "Total characters: " << countAllCharacters(input) << endl;

    // Count and display total letters
    cout << "Total letters: " << countLetters(input) << endl;

    // Count and display occurrences of the specific character
    cout << "Occurrences of '" << targetChar << "': " << countSpecificChar(input, targetChar) << endl;

    return 0;
}