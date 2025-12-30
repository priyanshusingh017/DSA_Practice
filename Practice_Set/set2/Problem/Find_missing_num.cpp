#include<iostream>
#include<vector>
using namespace std;

// Function to find the missing number in the array
int findMissingNumber(vector<int> nums) {
    int n = nums.size(); // Since one number is missing, actual n should be n+1
    int totalSum = (n + 1) * (n + 2) / 2; // Sum of first (n+1) natural numbers
    int sum = 0;
    for (int c : nums) {
        sum += c; // Calculate sum of elements in the array
    }
    return totalSum - sum; // The difference is the missing number
}

int main() {
    // Example usage:
    // Array from 1 to 5, with 3 missing: [1, 2, 4, 5]
    vector<int> nums = {1, 2, 4, 5};

    int missing = findMissingNumber(nums);

    cout << "The missing number is: " << missing << endl;

    return 0;
}