#include<bits/stdc++.h>
using namespace std;

bool twosum(vector<int>&nums , int target){

    sort(nums.begin(),nums.end());
    int n = nums.size();
    int l=0 , r=n-1;

    while(l<r){
        int sum = nums[l] + nums[r];

        if(sum==target){
            return true;
        }

        if(sum<target){
            l++;
        }
        else{
            r--;
        }
    }
    return false;
}

int main(){


    vector<int>nums = {1,3,5,6,7,3};
    cout<<twosum(nums,20);

    return 0;
}