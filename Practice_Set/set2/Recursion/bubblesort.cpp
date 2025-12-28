#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubblesort(vector<int>&nums , int n){
    // base case 
    if(n==0||n==1) return;

    for(int i=0; i<n-1; i++){
        if(nums[i]>nums[i+1]){
            swap(nums[i],nums[i+1]);
        }
    }

    bubblesort(nums , n-1);
}

int main(){
    int n;
    cout << "Enter array size: ";
    if (!(cin >> n) || n <= 0) return 0;
    vector<int>nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; ++i) cin >> nums[i];

    bubblesort(nums,n);

    for(auto c : nums){
        cout<<c<<" ";
    }

    return 0;
}