#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>&nums){

    int n = nums.size();

    for(int i=1; i<n; i++){
        int key = nums[i];
        int j = i-1;

        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}

int main(){

    int n;
    cout<<"enter the size"<<endl;
    if (!(cin >> n)) return 0;
    vector<int> nums(n);
    cout<<"enter the elements"<<endl;
    for (int i = 0; i < n; ++i) cin >> nums[i];

    insertionsort(nums);

    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << nums[i];
    }
    cout << "\n";
    return 0;
}