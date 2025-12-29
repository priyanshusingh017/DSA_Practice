#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion
int getSum(int *arr , int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

// with recursion
int getsum(int *arr , int n){
    if(n==0) return 0;
    if(n==1) return arr[0];

    return arr[0] + getsum(arr+1,n-1);
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum without recursion: " << getSum(arr, n) << endl;
    cout << "Sum with recursion: " << getsum(arr, n) << endl;

    return 0;
}