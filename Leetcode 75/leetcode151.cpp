#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
LeetCode 151: Reverse Words in a String

Goal: Given a string with words separated by spaces (possibly multiple),
return a string with the words in reverse order and single spaces.

Below are two approaches:
- reverseWords(): Uses stringstream to tokenize words, reverses the vector, and joins with spaces.
- reversewords(): Manually parses characters, pushes words onto a stack, then pops to build the result.
*/

string reverseWords(string s)
{
    // Approach 1: Tokenize with stringstream, reverse word order, and join.
    stringstream ss(s);
    vector<string>words;
    string word;

    while(ss>>word){
        // Extract words ignoring extra spaces
        words.push_back(word);
    }

    reverse(words.begin(),words.end());

    string result ;
    for(int i=0; i<words.size(); i++){
        // Add a single space between words
        if(i>0) result += " ";
        result += words[i];
    }

    return result;

}

string reversewords(string s){

    // Approach 2: Manual parse. Push each word to a stack, then pop to reverse order.
    stack<string>st;
    string word;

    for(int i=0; i<=s.size(); i++){
        // Build the current word while skipping spaces
        if(i<s.length()&& s[i]!=' '){
            word+=s[i];
        }
        else if(!word.empty()){
            // End of a word: push to stack and reset
            st.push(word);
            word = "";
        }
    }

    string result ;
    while(!st.empty()){
        // Pop words to build reversed sentence
        result+=st.top();
        st.pop();
        if(!st.empty()) result += " ";
    }

    return result;

}

int main()
{
    string s = "the sky is blue";

    // Expected output: "blue is sky the"
    cout<<reverseWords(s)<<endl;
    cout<<reversewords(s)<<endl;

    return 0;
}