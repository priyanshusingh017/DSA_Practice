#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Function to remove only space characters from the string
string RemoveSpace(string &str){
    string st = "";
    for(auto c : str){
        if(c != ' '){ // Skip space characters
            st += c;
        }
    }
    return st;
}

// Function to remove all whitespace characters (space, tab, newline, etc.)
string removeSpace(string &str){
    string st = "";
    for(auto c : str){
        if(!isspace(c)){ // Skip any whitespace character
            st += c;
        }
    }
    return st;
}

// Function to remove specific whitespace characters (space, tab, newline, carriage return)
string Removespace(string &str){
    string st = "";
    for(auto c : str){
        if(c != ' ' && c != '\t' && c != '\n' && c != '\r'){ // Skip listed whitespace
            st += c;
        }
    }
    return st;
}

int main(){
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read the entire line including spaces

    // Remove only spaces
    string result1 = RemoveSpace(input);
    cout << "String without spaces: " << result1 << endl;

    // Remove all whitespace characters
    string result2 = removeSpace(input);
    cout << "String without any whitespace: " << result2 << endl;

    // Remove specific whitespace characters
    string result3 = Removespace(input);
    cout << "String without space, tab, newline, carriage return: " << result3 << endl;

    return 0;
}