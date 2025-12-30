#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach: O(n^2) time, O(1) space
int findDuplicateBruteForce(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) {
                return nums[i]; // Duplicate found
            }
        }
    }
    return -1; // No duplicate found
}

// Hash Set Approach: O(n) time, O(n) space
int findDuplicateHashSet(vector<int>& nums) {
    unordered_set<int> st;
    for(auto c : nums) {
        if(st.find(c) != st.end()) {
            return c; // Duplicate found
        }
        st.insert(c);
    }
    return -1; // No duplicate found
}

// Hash Map Approach: O(n) time, O(n) space
int findDuplicateHashMap(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
        if (freq[num] > 1) {
            return num; // Duplicate found
        }
    }
    return -1; // No duplicate found
}

// Optimal Approach using Frequency Array: O(n) time, O(n) space
int findDuplicateOptimal(vector<int>& nums) {
    int n = nums.size();
    vector<int> freq(n, 0);

    for (int num : nums) {
        if (freq[num] > 0) {
            return num; // Duplicate found
        }
        freq[num]++;
    }
    return -1; // No duplicate found
}

int main() {
    vector<int> nums = {1, 3, 4, 2, 2};

    // Using Brute Force
    cout << "Duplicate (Brute Force): " << findDuplicateBruteForce(nums) << endl;

    // Using Hash Set
    cout << "Duplicate (Hash Set): " << findDuplicateHashSet(nums) << endl;

    // Using Hash Map
    cout << "Duplicate (Hash Map): " << findDuplicateHashMap(nums) << endl;

    // Using Optimal Approach
    cout << "Duplicate (Optimal): " << findDuplicateOptimal(nums) << endl;

    return 0;
}