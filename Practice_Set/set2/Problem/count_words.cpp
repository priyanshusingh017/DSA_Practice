#include <iostream>
#include <sstream> // Only include necessary header for stringstream
using namespace std;

/*
 stringstream ss(str); — initializes with a string.
 ss >> word; — extracts words or values.
*/

// Function to count words using stringstream
int countWordsUsingStringStream(string s1)
{
    stringstream ss(s1);
    string word;
    int count = 0;

    // Extract words separated by whitespace
    while (ss >> word) {
        count++;
    }
    return count;
}

// Function to count words manually by iterating through the string
int countWords(string s) {
    int count = 0;
    bool inWord = false;

    for (char c : s) {
        // Check for whitespace characters
        if (c == ' ' || c == '\t' || c == '\n') {
            // If we were in a word and found space, increment count
            if (inWord) {
                count++;
                inWord = false;
            }
        } else {
            // Non-space character means we're in a word
            inWord = true;
        }
    }

    // If the last character was part of a word, count it
    if (inWord) {
        count++;
    }

    return count;
}

int main()
{
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    // Count words using manual method
    cout << "Number of words: " << countWords(input) << endl;

    // Optionally, show result using stringstream method
    cout << "Number of words (using stringstream): " << countWordsUsingStringStream(input) << endl;

    return 0;
}
