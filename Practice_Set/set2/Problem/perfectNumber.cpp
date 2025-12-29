#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
A perfect number is a positive integer that is equal to the sum of its proper divisors (excluding itself).
For example, 6 is a perfect number because its divisors are 1, 2, 3, and 6, and 1 + 2 + 3 = 6.
*/

bool perfectNumber(int n){
    int sum=0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum = sum+i;
        }
    }
    if(sum==n){
        return true;
    }
    else{
        return false;
    }
}

// Recursive function to calculate sum of proper divisors
int sumofDivisor(int n , int i=1){
    if(i==n) return 0;
    if(n%i==0){
        return i+sumofDivisor(n,i+1);
    }
    else{
        return sumofDivisor(n,i+1);
    }
}

bool isprefect(int n){
    return n>1 && sumofDivisor(n);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (perfectNumber(n)) {
        cout << n << " is a perfect number (iterative check)." << endl;
    } else {
        cout << n << " is not a perfect number (iterative check)." << endl;
    }

    if (isprefect(n)) {
        cout << n << " is a perfect number (recursive check)." << endl;
    } else {
        cout << n << " is not a perfect number (recursive check)." << endl;
    }

    return 0;
}