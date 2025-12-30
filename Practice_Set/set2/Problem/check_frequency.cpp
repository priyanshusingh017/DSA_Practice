#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Brute force method to print frequency of each element
void countFrequencyBruteForce(vector<int>& nums) {
    int n = nums.size();
    vector<bool> visited(n, false);
    cout << "Element : Frequency (Brute Force)" << endl;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
                visited[j] = true;
            }
        }
        cout << nums[i] << " : " << count << endl;
    }
}


void countFrequency(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    cout << "Element : Frequency" << endl;
    for (const auto& p : freq) {
        cout << p.first << " : " << p.second << endl;
    }
}


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    countFrequency(nums);
    countFrequencyBruteForce(nums);
    return 0;
}