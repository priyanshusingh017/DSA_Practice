#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to check if a character is a vowel (case-insensitive)
bool isVowels(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' 
            || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Count vowels using a loop and the isVowels function
int cntVowels(string &str){
    int cnt = 0;
    for (auto c : str){
        if(isVowels(c)){
            cnt++;
        }
    }
    return cnt;
}

// Count vowels using std::count_if and the isVowels function
int countvowels(string &str){
    return count_if(str.begin(), str.end(), isVowels);
}

// Count vowels using std::count_if and a lambda expression
int Countvowels(string &str){
    return count_if(str.begin(), str.end(), [](char c){
        // Lambda version to check for vowels
        return string("AEIOUaeiou").find(c) != string::npos;
    });
}




int main() {
    string str = "abcdeif";
    cout << "Number of vowels (loop): " << cntVowels(str) << endl;
    cout << "Number of vowels (std::count_if with function): " << countvowels(str) << endl;
    cout << "Number of vowels (std::count_if with lambda): " << Countvowels(str) << endl;
    return 0;
}
