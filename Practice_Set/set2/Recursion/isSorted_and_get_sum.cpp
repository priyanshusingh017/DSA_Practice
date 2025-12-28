#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int*arr , int n){
    
    // base case 
    if(n==0||n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }

    return isSorted(arr+1,n-1);
}

int getSum(int *arr , int n){
    // base case 
    if(n==0) return 0;
    if(n==1) return arr[0];

    return arr[0]+getSum(arr+1,n-1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array is sorted: " << (isSorted(arr, n) ? "Yes" : "No") << endl;
    cout << "Sum of array: " << getSum(arr, n) << endl;

    return 0;
}