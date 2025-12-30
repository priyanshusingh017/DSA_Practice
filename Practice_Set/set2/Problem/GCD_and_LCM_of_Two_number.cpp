#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Euclidean Algorithm (Recursive)
int gcdNumber(int a , int b){
    while(b!=0){
        int temp = b;
        b=a%b;
        a=temp;
    }
    return abs(a);
}

// Euclidean Algorithm (Recursive)
int gcdRecursive(int a, int b) {
    if (b == 0) return abs(a);
    return gcdRecursive(b, a % b);
}

// LCM using GCD
int lcm(int a, int b) {
    return abs(a * b) / gcdRecursive(a, b);
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD (Iterative): " << gcdNumber(a, b) << endl;
    cout << "GCD (Recursive): " << gcdRecursive(a, b) << endl;
    cout << "LCM: " << lcm(a, b) << endl;

    return 0;
}