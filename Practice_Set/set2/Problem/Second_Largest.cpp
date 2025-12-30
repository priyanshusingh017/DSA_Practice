#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Single pass: Find second largest without sorting
int SecondLargest(const vector<int>& nums) {
    int maxnum = INT_MIN, secondmax = INT_MIN;
    for (int num : nums) {
        if (num > maxnum) {
            secondmax = maxnum;
            maxnum = num;
        } else if (num > secondmax && num < maxnum) {
            secondmax = num;
        }
    }
    return secondmax;
}

// Using sort: Find second largest
int SecondLargestSorted(vector<int> nums) {
    if (nums.size() < 2) return -1;
    sort(nums.begin(), nums.end(), greater<int>()); // Descending order
    int largest = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != largest) {
            return nums[i];
        }
    }
    return -1; // All elements are equal
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

    int result1 = SecondLargest(nums);
    if (result1 == INT_MIN) {
        cout << "No second largest element (single pass)." << endl;
    } else {
        cout << "Second largest element (single pass): " << result1 << endl;
    }

    int result2 = SecondLargestSorted(nums);
    if (result2 == -1) {
        cout << "No second largest element (using sort)." << endl;
    } else {
        cout << "Second largest element (using sort): " << result2 << endl;
    }

    return 0;
}