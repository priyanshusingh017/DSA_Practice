#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 0,1,1,2,3,5,8,13,21.... so on

// without Recursion
void fibonnaci_number(int n){
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for(int i = 2; i < n; i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

// with recursion
int fibonnacinumber(int n){
    // base
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonnacinumber(n-1)+fibonnacinumber(n-2);
}


int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    if(n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "Fibonacci sequence (iterative): ";
        fibonnaci_number(n);
        cout << endl;

        cout << "Fibonacci sequence (recursive): ";
        for(int i=0; i<n; i++){
            cout<<fibonnacinumber(i)<<" ";
        }
        cout << endl;
    }
    return 0;
}