#include<bits/stdc++.h>
using namespace std;

void movezero(vector<int>&nums){
    
    int n = nums.size(); 
    int l=0 , r=0;

    while(r<n){
        
        if(nums[r]!=0){
            swap(nums[r],nums[l]);
            l++;
        }
        r++;
    }
}

int main(){

    vector<int>nums = {1,0,2,0,3};

    movezero(nums);

    for(auto c : nums){
        cout<<c<<" ";
    }

    return 0;
}