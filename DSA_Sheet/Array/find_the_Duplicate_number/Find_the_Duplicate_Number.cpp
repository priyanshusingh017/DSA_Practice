#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &nums)
{

    /*
    // Approach 1 - Using Set (O(n) space)
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) {
            return num;
        }
        seen.insert(num);
    }
    return -1;
    */

    // Approach 2 - Floyd's Cycle Detection (O(1) space)

    // Phase 1: Find the intersection point in the cycle
    int slow = nums[0];
    int fast = nums[0];

    do
    {
        slow = nums[slow];       // Move one step
        fast = nums[nums[fast]]; // Move two steps
    } while (slow != fast);

    // Phase 2: Find the entrance to the cycle (duplicate number)
    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    int duplicate = findDuplicate(nums);
    cout << "Duplicate number: " << duplicate << endl;
    return 0;
}