#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion
int CountPrime(int*arr , int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    return count;
}
// with recursion
int CntPrime(int *arr , int n){
    // base case
    if(n==0) return 0;

    if(arr[n-1]%2!=0){
        return 1+CntPrime(arr,n-1);
    }
    else{
        return CntPrime(arr,n-1);
    }
}

// without recursion 
int countPrime(int n){
    int cnt =0;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            cnt++;
        }
    }
    return cnt;
}
// with recursion
int cntPrime(int n){
    // base case
    if(n==0 ) return 0;

    if((n)%2!=0){
        return 1+cntPrime(n-1);
    }
    else{
        return cntPrime(n-1);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Count of odd numbers in array (iterative): " << CountPrime(arr, n) << endl;
    cout << "Count of odd numbers in array (recursive): " << CntPrime(arr, n) << endl;

    int num = 10;
    cout << "Count of odd numbers from 1 to " << num << " (iterative): " << countPrime(num) << endl;
    cout << "Count of odd numbers from 1 to " << num << " (recursive): " << cntPrime(num) << endl;

    return 0;
}