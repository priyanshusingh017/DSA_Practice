#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Recursive function to check if the array is sorted in non-decreasing order
bool isSorted(int* arr, int size) {
    // Base case: if array has 0 or 1 element, it's sorted
    if (size == 0 || size == 1) {
        return true;
    }
    // If the first element is greater than the next, array is not sorted
    if (arr[0] > arr[1]) {
        return false;
    } else {
        // Recursively check the rest of the array
        return isSorted(arr + 1, size - 1);
    }
}

// Iterative function to check if the array is sorted in non-decreasing order
bool isSortedIterative(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        // If any adjacent pair is out of order, array is not sorted
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n]; // Declare array of size n

    cout << "Enter array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; // Input array elements
    }

    // Check using recursive function
    if (isSorted(arr, n)) {
        cout << "Array is sorted (checked recursively)." << endl;
    } else {
        cout << "Array is not sorted (checked recursively)." << endl;
    }

    // Check using iterative function
    if (isSortedIterative(arr, n)) {
        cout << "Array is sorted (checked iteratively)." << endl;
    } else {
        cout << "Array is not sorted (checked iteratively)." << endl;
    }

    return 0;
}