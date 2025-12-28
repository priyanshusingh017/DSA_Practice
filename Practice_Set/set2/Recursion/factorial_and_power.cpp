#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    // base case 
    if(n<=1) return 1;

    return n*factorial(n-1);
}

int power2(int n){
    // base case 
    if(n==0) return 1;

    return 2*power2(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    cout << "2 raised to the power " << n << " is " << power2(n) << endl;

    return 0;
}