#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// without recursion
bool linearSearch(int *arr ,int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            cout<<i;
            return true;
        }
    }
    return false;
}

// with recursion
bool LinearSearch(int *arr , int n , int target){
    // base case 
    if(n==0) return false;
    if(arr[0]==target) return true;
    return LinearSearch(arr+1,n-1,target);
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << "Enter target to search: ";
    cin >> target;

    cout << "Iterative Linear Search: ";
    if(linearSearch(arr.data(), n, target)) {
        cout << " index (Found)";
    } else {
        cout << "Not found";
    }
    cout << endl;

    cout << "Recursive Linear Search: ";
    if(LinearSearch(arr.data(), n, target)) {
        cout << "Found";
    } else {
        cout << "Not found";
    }
    cout << endl;

    return 0;
}
