#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion
bool checkplaindrome(int n){
    int temp=n;
    int rev = 0;
    while(temp){
        int digit = temp%10;
        rev = rev*10+digit;
        temp/=10;
    }
    if(rev==n){
        return true;
    }
    return false;
}

// with recursion
int reverseNumber(int n , int rev=0){
    // base case 
    if(n==0){
        return rev;
    }
    return reverseNumber( n/10 , rev*10+n%10);
}

bool check_palindrome(int n){
    return n==reverseNumber(n);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(checkplaindrome(n)){
        cout << n << " is a palindrome number (iterative)." << endl;
    } else {
        cout << n << " is not a palindrome number (iterative)." << endl;
    }

    if(check_palindrome(n)){
        cout << n << " is a palindrome number (recursive)." << endl;
    } else {
        cout << n << " is not a palindrome number (recursive)." << endl;
    }
    return 0;
}