#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion
int count_digits(int n){
    int temp=n;
    int count=0;
    while(temp){
        temp/=10;
        count++;
    }
    return count;
}
// with recursion
int CountDigits(int n){

    // base case
    if(n==0){
        return 0;
    }

    return 1+ CountDigits(n/10);
}

int countdigits(int n){
    string str = to_string(n);
    int size = str.size();
    
    return size;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of digits (using loop): " << count_digits(n) << endl;
    if(n == 0)
        cout << "Number of digits (using recursion): 1" << endl;
    else
        cout << "Number of digits (using recursion): " << CountDigits(n) << endl;
    cout << "Number of digits (using string): " << countdigits(n) << endl;
    return 0;
}