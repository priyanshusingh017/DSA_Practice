#include<bits/stdc++.h>
using namespace std;

int longestsubarraysum(vector<int>&nums){

    int n = nums.size();
    int sum = 0 , maxsum = nums[0];
    for(int i=0; i<n; i++){
        sum += nums[i];
        maxsum = max(sum,maxsum);
        if(sum<0){
            sum=0;
        }
    }

    return maxsum;
}

int main(){

    vector<int>nums = {1,0,-2,3,4,5,-8,2,9};
    cout<<longestsubarraysum(nums);

    return 0;
}