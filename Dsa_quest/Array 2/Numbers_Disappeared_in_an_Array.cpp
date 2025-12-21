#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    
    int n = nums.size();
    vector<int> res(n+1,0);

    for(auto i : nums){
       res[i]=1; 
    }
    vector<int>ans;
    for(int i=1; i<=n; i++){
        if(res[i]!=1){
            ans.push_back(i);
        }
    }

    return ans;
}

int main(){

    vector<int>nums={4,3,2,7,8,2,3,1};

    vector<int>ans = findDisappearedNumbers(nums);
    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}