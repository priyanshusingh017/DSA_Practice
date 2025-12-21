#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int subarraySum(vector<int>& nums, int k) {

        // Using unordered_map to store frequency of prefix sums
        unordered_map<int, int> prefixsum;
        
        // Initialize with prefixsum[0] = 1 to handle case when subarray starts from index 0
        prefixsum[0] = 1;
        
        // Initialize current sum and count of subarrays
        int currsum = 0, count = 0;
        
        // Iterate through each element in the array
        for(int i = 0; i < nums.size(); i++) {

            // Calculate cumulative sum up to current index
            currsum += nums[i];
            
            // Check if (currsum - k) exists in map
            // If yes, it means there are subarrays ending at current index with sum k
            if(prefixsum.find(currsum - k) != prefixsum.end()) {
                // Add the frequency of (currsum - k) to count
                count += prefixsum[currsum - k];
            }
            
            // Increment frequency of current prefix sum in map
            prefixsum[currsum]++;
        }
        
        // Return total count of subarrays with sum k
        return count;
    }


int main()
{

    vector<int>nums = {10, 5, 2, 7, 1, -10};
    int k = 15;
    cout<<subarraySum(nums , k); 

    return 0;
}