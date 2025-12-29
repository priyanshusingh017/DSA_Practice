#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion 
int reverse_number(int n){
    int temp = n;
    int reverse = 0;
    while(temp){
        int digit = temp%10;
        reverse = reverse*10+digit;
        temp = temp/10;
    }
    return reverse;
}

// with recursion
int reverseNumber(int n , int rev){
    // base case 
    if(n==0){
        return rev;
    }
    return reverseNumber(n/10 , rev*10+n%10);
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Using iterative approach
    int reversed_iter = reverse_number(n);
    cout << "Reversed number (iterative): " << reversed_iter << endl;

    // Using recursive approach
    int reversed_rec = reverseNumber(n, 0);
    cout << "Reversed number (recursive): " << reversed_rec << endl;

    return 0;
}