#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion
void bubblesort(int*arr , int n ){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

// Recursive bubble sort (sorts the array in-place)
void BubbleSort(int *arr, int n) {
    // Base case: if array size is 0 or 1, it's already sorted
    if (n == 0 || n == 1) return;

    // Perform one pass of bubble sort: largest element moves to the end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    // Recursively sort the first n-1 elements
    BubbleSort(arr, n - 1);
}

int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Using non-recursive bubble sort
    bubblesort(arr, n);
    cout << "Sorted array (non-recursive): ";
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;

    // Example for recursive bubble sort
    int arr2[] = {3, 7, 4, 8, 2};
    int m = sizeof(arr2)/sizeof(arr2[0]);
    BubbleSort(arr2, m);
    cout << "Sorted array (recursive): ";
    for(int i=0; i<m; i++) cout << arr2[i] << " ";
    cout << endl;

    return 0;
}