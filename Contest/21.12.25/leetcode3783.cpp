#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
 You are given an integer n.
 Define its mirror distance as: abs(n - reverse(n))​​​​​​​ where reverse(n) is the integer formed by reversing the digits of n.
 Return an integer denoting the mirror distance of n​​​​​​​.
 abs(x) denotes the absolute value of x.
*/

int mirrorDistance(int n) {
    
    int dupliacte = n;
    int reverse =0;
    while(dupliacte){
        int lastdigit = dupliacte % 10; // remove the last digit from the number 
        reverse = reverse*10 + lastdigit;
        dupliacte = dupliacte/10;
    }

    int result = abs(n-reverse);

    return result;

}

int main(){

    cout<<mirrorDistance(25)<<endl;
    cout<<mirrorDistance(10)<<endl;
    cout<<mirrorDistance(7)<<endl;

    return 0;
}