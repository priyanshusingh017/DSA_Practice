#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxNumber(vector<int>&nums){
    int n = nums.size();
    int minnum = INT_MAX;
    for(int i=0; i<n; i++){
        if(nums[i]<minnum){
            minnum=nums[i];
        }
    }
    return minnum;
}

// Recursive function to find the largest number in the array
int maxNumberRecursive(const vector<int>& nums, int n) {
    if (n == 1) return nums[0]; // Base case: only one element
    return min(nums[n - 1], maxNumberRecursive(nums, n - 1));
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int& num : nums) {
        cin >> num;
    }
    int result_iterative = maxNumber(nums);
    int result_recursive = maxNumberRecursive(nums, n);
    cout << "Smallest number (iterative): " << result_iterative << endl;
    cout << "Smallest number (recursive): " << result_recursive << endl;
    return 0;
}