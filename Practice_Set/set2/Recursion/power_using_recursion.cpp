#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
  power(a,b) = if (b is even ) => {(a^b/2)*(a^b/2)}
  if (b is odd) => {a*(a^b/2)*(a^b/2)}
*/

long long power(int a , int b){

    // base case 
    if(b==0) return 1;
    if(b==1) return a;

    long long ans = power(a,b/2);
    // b is odd
    if(b&1){
        return a*ans*ans;
    }
    else{
        return ans*ans;
    }
}

int main(){
    int a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    cout << a << "^" << b << " = " << power(a, b) << endl;

    return 0;
}