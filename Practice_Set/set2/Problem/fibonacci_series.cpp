#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion
void fibonacciSeries(int n){
    
    int a=0 , b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=2; i<n; i++){
        int c = a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}

// with recursion
int fibonacci_Series(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fibonacci_Series(n-1)+fibonacci_Series(n-2);
}

int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Series (Iterative): ";
    fibonacciSeries(n);
    cout << endl;

    cout << "Fibonacci Series (Recursive): ";
    for(int i = 0; i < n; i++) {
        cout << fibonacci_Series(i) << " ";
    }
    cout<<endl;

    // cout<<fibonacci_Series(n); // here if n = 6 then give output 8.
    // here we go through loop because its print series not the nth value 
    
    cout << endl;
    return 0;
}