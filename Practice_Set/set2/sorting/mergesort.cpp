#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&nums , int s , int e){

    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k=s;
    for(int i=0; i<len1; i++){
        first[i]=nums[k++];
    }

    k=mid+1;
    for(int i=0; i<len2; i++){
        second[i]=nums[k++];
    }

    int index1 = 0 , index2 = 0;
    k = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            nums[k++]=first[index1++];
        }
        else{
            nums[k++]=second[index2++];
        }
    }

    while(index1<len1) nums[k++]=first[index1++];
    while(index2<len2) nums[k++]=second[index2++];

    delete []first;
    delete []second;

}

void mergesort(vector<int>&arr , int s , int e){

    //base case
    if(s>=e){
        return;
    }

    int mid = s + (e-s)/2;

    mergesort(arr , s , mid);

    mergesort(arr,mid+1,e);

    merge(arr , s , e);

}

int main() {
    int n;
    cout<<"enter the size"<<endl;
    if (!(cin >> n)) return 0;
    vector<int> arr(n);
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < n; ++i) cin >> arr[i];

    if (n > 1) mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << (i + 1 < n ? ' ' : '\n');
    }
    return 0;
}