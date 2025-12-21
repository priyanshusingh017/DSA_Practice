#include <bits/stdc++.h>
using namespace std;

// Approach 1: Sort-based method
// Time: O(n log n) due to sort, Space: O(1) extra (ignoring sort's internal memory)
// Handles duplicates by skipping equal adjacent elements.
int longestConsecutive(vector<int> &nums){
    if(nums.empty()) return 0;
    int n = nums.size();
    int maxcount = 1, currcount = 1;

    // Sort the numbers to bring consecutive values adjacent
    sort(nums.begin(), nums.end());

    for(int i = 1; i < n; i++){
        if(nums[i] == nums[i-1]){
            // Duplicate value, ignore and continue the streak length unchanged
            continue;
        }
        else if (nums[i] == nums[i-1] + 1){
            // Consecutive number found, extend current streak
            currcount++;
            maxcount = max(maxcount, currcount);
        }
        else{
            // Gap detected, reset current streak length
            currcount = 1;
        }
    }
    return maxcount;
}

// Approach 2: Hash-set method (optimal)
// Time: O(n) average, Space: O(n)
// For each number that is the start of a sequence (no predecessor in set),
// walk forward counting the length of the consecutive sequence.
int longestconsecutive(vector<int> nums){

    if(nums.empty()) return 0;

    // Put all numbers into a hash set for O(1) lookups
    unordered_set<int> arr(nums.begin(), nums.end());
    int count = 1;

    for(auto it : arr){
        // Only start counting if 'it' is the beginning of a sequence
        if(arr.find(it - 1) == arr.end()){
            int len = 1;
            int y = it + 1;
            // Walk forward while consecutive numbers exist in the set
            while(arr.find(y) != arr.end()){
                len++;
                y++;
            }
            // Update maximum sequence length found
            count = max(count, len);
        }
    }
    return count;
}

int main()
{
    vector<int>nums = {100,4,200,1,3,2};

    cout<<longestconsecutive(nums);

    return 0;
}