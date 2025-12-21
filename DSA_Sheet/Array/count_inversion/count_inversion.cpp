#include<bits/stdc++.h>
using namespace std;

/*
 count the inversion means that - Inversion count is the number of pairs of elements (i, j) 
 such that i < j and arr[i] > arr[j]
*/

// Brute-force approach to count inversions in O(n^2) time
int inversionCount(vector<int> &arr) {
    int n = arr.size();
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
}

// Merge step for merge sort, counts inversions across the split
int countmergesort(vector<int>&arr , int left , int mid , int right){
    int count = 0;
    vector<int>temp(right-left+1);
    int i=left , j=mid+1 , k=0;
    // Merge the two sorted halves and count inversions
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            count+=mid-i+1; // Count inversions
        }
    }
    // Copy remaining elements
    while(i<=mid) temp[k++]=arr[i++];
    while(j<=right) temp[k++]=arr[j++];
    // Copy merged elements back to original array
    for(int idx = 0; idx <k; idx++){
        arr[left+idx]=temp[idx];
    }
    return count;
}

// Recursive merge sort function to count inversions in O(n log n) time
int mergesort(vector<int>&arr , int left , int right){
    int count = 0;
    if(left<right){
        int mid = left + (right-left)/2;
        count+=mergesort(arr,left,mid);
        count+=mergesort(arr,mid+1,right);
        count+=countmergesort(arr,left,mid,right);
    }
    return count;
}

// Wrapper function to count inversions using merge sort
int inversioncount(vector<int>nums){
    int n = nums.size();
    return mergesort(nums , 0 , n-1);
}

int main(){

    vector<int>nums={2,4,1,3,5};

    cout<<inversioncount(nums);

    return 0;
}