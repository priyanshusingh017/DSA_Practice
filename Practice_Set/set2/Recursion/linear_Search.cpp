#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int *arr , int n , int key){

    // base case 
    if(n==0) return false;

    if(arr[0]==key){
        return true;
    }

    return linearSearch(arr+1,n-1,key);
    // here arr+1 means move the pointer forward and reduces the size by 1.
}

int main(){
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter key to search: ";
    cin >> key;

    if(linearSearch(arr, n, key)) {
        cout << "Key found!" << endl;
    } else {
        cout << "Key not found." << endl;
    }
    return 0;
}