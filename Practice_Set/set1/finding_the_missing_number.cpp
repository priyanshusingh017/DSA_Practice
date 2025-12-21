#include<bits/stdc++.h>
using namespace std;

int missingnumber(vector<int>&nums){

    int n = nums.size();

    int totalsum = (n*(n+1))/2;
    int sum =0;
    for(auto c : nums){
        sum +=c;
    }

    return (totalsum-sum);
}

int main(){

    int m;
    if(!(cin >> m)){
        // fallback example if no input is provided
        vector<int> nums = {0,1,3,5,2};
        cout << missingnumber(nums) << '\n';
        return 0;
    }

    vector<int> nums(m);
    for(int i = 0; i < m; ++i) cin >> nums[i];

    cout << missingnumber(nums) << '\n';
    return 0;
}