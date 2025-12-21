#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> findErrorNums(vector<int>& nums) {

    int n = nums.size();
    unordered_set<int>q;
    int dup =-1;
    int sum = 0;
    for(auto i : nums){
        if(q.count(i)){
            if(dup==-1) dup = i;
        }
        else{
            q.insert(i);
            sum += i;
        }
    }
    int totsum = (n*(n+1))/2;
    int missing = totsum - sum;


    return {dup , missing};
}

int main(){

    vector<int>nums = {1,2,2,4};

    vector<int>ans = findErrorNums(nums);

    for(auto i : ans){
        cout<<i<<" ";
    }

    return 0;
}