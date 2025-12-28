#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str , int i , int j){

    // base case
    if(i>j) return;

    swap(str[i],str[j]);
    i++ , j--;
    reverseString(str , i , j);
}

void printreverse(string&str){
    
    int n = str.size();

    for(int i=n-1; i>=0; i--){
        cout<<str[i];
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Original string: " << str << endl;

    // Recursive reversal (in-place)
    string recStr = str;
    reverseString(recStr, 0, recStr.size() - 1);
    cout << "Reversed string (recursive): " << recStr << endl;

    // Iterative reversal (print only)
    cout << "Reversed string (iterative print): ";
    printreverse(str);
    cout << endl;

    return 0;
}