#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion
int factorial_number(int n){
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial=factorial*i;
    }
    return factorial;
}

// with recursion
int factorialNumber(int n){
    // base case 
    if(n<=1) return 1;

    return n*factorialNumber(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial (iterative): " << factorial_number(n) << endl;
    cout << "Factorial (recursive): " << factorialNumber(n) << endl;

    return 0;
}