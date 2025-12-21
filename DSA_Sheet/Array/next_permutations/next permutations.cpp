#include<bits/stdc++.h>
using namespace std;

// Function to compute the next lexicographical permutation of the given vector
void nextPermutation(vector<int>& nums) {
    int n = nums.size();

    // Step 1: Find the first index 'i' from the right such that nums[i] < nums[i+1]
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // Step 2: If such an index is found, find the first index 'j' from the right such that nums[j] > nums[i]
    if (i >= 0) {
        int j = n - 1;
        while (j >= 0 && nums[i] >= nums[j]) {
            j--;
        }
        // Step 3: Swap nums[i] and nums[j]
        swap(nums[i], nums[j]);
    }

    // Step 4: Reverse the subarray from i+1 to the end to get the next permutation
    reverse(nums.begin() + i + 1, nums.end());
}


int main(){

    vector<int>nums = {5,1,1}; 

    nextPermutation(nums);

    for(auto i : nums){
        cout<<i<<" ";
    }

    return 0;
}