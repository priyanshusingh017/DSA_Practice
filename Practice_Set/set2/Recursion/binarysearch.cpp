#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binarysearch (int *arr , int s , int e , int key){
    if(s > e){
        return false;
    }

    int mid = s + (e - s) / 2;

    if(arr[mid] == key){
        return true;
    }
    else if (arr[mid] < key){
        return binarysearch(arr, mid + 1, e, key);
    }
    else{
        return binarysearch(arr, s, mid - 1, key);
    }
}

int main(){
    int n;
    cout << "Enter array size: ";
    if (!(cin >> n) || n <= 0) return 0;
    int *arr = new int[n];
    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; ++i) cin >> arr[i];
    int key;
    cout << "Enter key to search: ";
    cin >> key;
    bool found = binarysearch(arr, 0, n - 1, key);
    cout << (found ? "Found" : "Not Found") << endl;
    delete[] arr;
    return 0;
}