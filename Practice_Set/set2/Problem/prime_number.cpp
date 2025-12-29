#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion
bool checkprime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// without recursion
bool check_prime(int n , int i=2){
    if(n<=1) return false;
    if(i*i<=n) return true;
    if(n%i==0) return false;
    return check_prime(n,i+1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(checkprime(n)){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    // Also test the recursive function
    if(check_prime(n)){
        cout << "(Recursive) " << n << " is a prime number." << endl;
    } else {
        cout << "(Recursive) " << n << " is not a prime number." << endl;
    }
    return 0;
}