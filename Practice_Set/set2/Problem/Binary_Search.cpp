
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
   Binary Search (Iterative and Recursive)
   - Array must be sorted in non-decreasing order before using binary search.
   - Returns true if key is found, false otherwise.
   - Prints the index if found.
*/

// Iterative binary search
bool binarySearch(int *arr, int n, int key)
{
    int s = 0, e = n - 1;
    // Loop until the search space is valid
    while (s <= e)
    {
        int mid = s + (e - s) / 2; // Calculate mid to avoid overflow
        if (arr[mid] == key)
        {
            cout << mid; // Print index if found
            return true;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1; // Search right half
        }
        else
        {
            e = mid - 1; // Search left half
        }
    }
    return false; // Not found
}

// Recursive binary search
bool BinarySearch(int *arr, int s, int e, int key)
{
    // Base case: search space is invalid
    if (s > e)
        return false;
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        cout << mid ; // Print index if found
        return true;
    }
    else if (arr[mid] < key)
    {
        // Search right half recursively
        return BinarySearch(arr, mid + 1, e, key);
    }
    else
    {
        // Search left half recursively
        return BinarySearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key to search: ";
    cin >> key;

    // Iterative binary search
    cout << "Iterative Binary Search: ";
    if (!binarySearch(arr, n, key))
    {
        cout << "Not found";
    }
    else
    {
        cout << " th index (found)";
    }
    cout << endl;

    // Recursive binary search
    cout << "Recursive Binary Search: ";
    if (!BinarySearch(arr, 0, n - 1, key))
    {
        cout << "Not found";
    }
    else
    {
        cout << " (found)";
    }
    cout << endl;

    return 0;
}