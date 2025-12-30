#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Linear search function: returns the index of target if found, else -1
int linearsearch(int *arr, int n, int target) {
    for(int i = 0; i < n; ++i) {
        if(arr[i] == target) {
            return i; // Target found at index i
        }
    }
    return -1; // Target not found
}

// Binary search function: returns the index of target if found, else -1
// Assumes that the array is sorted
int binarysearch(int *arr, int n, int target) {
    int s = 0, e = n - 1; // e should be n-1 (last index)
    while(s <= e) {
        int mid = s + (e - s) / 2;
        if(arr[mid] == target) {
            return mid; // Target found at index mid
        }
        else if(arr[mid] < target) {
            s = mid + 1; // Search in right half
        }
        else {
            e = mid - 1; // Search in left half
        }
    }
    return -1; // Target not found
}

int main() {
    int n, target;
    // Input array size
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    // Input array elements
    cout << "Enter elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    // Input target value
    cout << "Enter target value: ";
    cin >> target;

    // Linear search
    int idx_linear = linearsearch(arr, n, target);
    if(idx_linear != -1)
        cout << "Linear Search: Target found at index " << idx_linear << endl;
    else
        cout << "Linear Search: Target not found" << endl;

    // Sort array for binary search
    sort(arr, arr + n);

    // Binary search
    int idx_binary = binarysearch(arr, n, target);
    if(idx_binary != -1)
        cout << "Binary Search: Target found at index " << idx_binary << " (in sorted array)" << endl;
    else
        cout << "Binary Search: Target not found (in sorted array)" << endl;

    return 0;
}