#include<iostream>
#include<cmath>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    
    int n = nums.size();
    vector<int>sorrtedarray = nums;
    sort(sorrtedarray.begin() , sorrtedarray.end());

    unordered_map<int,int>mp;
    for(int i=n-1; i>=0; i--){
        mp[sorrtedarray[i]]=i;
    }

    vector<int>result(n);
    for(int i=0; i<n; i++){
        result[i]=mp[nums[i]];
    }

    return result;

}

int main(){

    vector<int>nums= {8,1,2,2,3};

    vector<int>ans = smallerNumbersThanCurrent(nums);
    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}