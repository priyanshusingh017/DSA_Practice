#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void saydigit(string *arr , int n){

    // base case 
    if(n==0) return;

    int digit = n%10;  // return the remainder
    n=n/10; // return the quotient 

    if(n!=0) saydigit(arr , n);

    cout<<arr[digit]<<" ";
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigit(arr, n);
    cout << endl;
    return 0;
}