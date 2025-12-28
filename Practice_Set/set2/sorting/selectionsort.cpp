#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionsort(vector<int>&nums){
    int n = nums.size();
    for(int i=0; i<n-1; i++){
        int minindex = i;
        for(int j=i+1; j<n; j++){
            if(nums[j]<nums[minindex]){
                minindex=j;
            }
        }
        swap(nums[i],nums[minindex]);
    }
}

int main(){

    int n;
    cout<<"enter the size"<<endl;
    if (!(cin >> n)) return 0;
    vector<int> nums(n);
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < n; ++i) cin >> nums[i];

    selectionsort(nums);

    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << nums[i];
    }
    cout << "\n";
    return 0;
}