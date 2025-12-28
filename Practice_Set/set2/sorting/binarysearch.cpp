#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int *arr , int n , int target){
    int s = 0 , e = n;
    
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if (arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;

}

int main() {
    int n;
    cout <<"enter the size "<<endl;
    cin >> n;
    cout<<"enter the elements "<<endl;
    int *arr = new int[n];
    for(int i = 0; i < n; ++i) cin >> arr[i];
    cout<<"enter the target"<<endl;
    int target;
    cin >> target;
    cout << binarysearch(arr, n, target) << endl;
    
    delete[] arr;
    return 0;
}