#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// LeetCode 334: Increasing Triplet Subsequence
// Idea (O(n) time, O(1) space):
// Track the smallest value seen so far (first) and the smallest possible
// second value that can come after it (second). If we find a number greater
// than both, we have an increasing triplet (first < second < current).
bool increasingTriplet(vector<int> &nums)
{
    int first = INT_MAX;   // smallest value seen so far
    int second = INT_MAX;  // smallest value greater than 'first'
    for (int n : nums)
    {
        if (n <= first)
        {
            first = n;          // new smallest value
        }
        else if (n <= second)
        {
            second = n;         // best candidate for second
        }
        else
        {
            return true;         // found n > second → triplet exists
        }
    }
    return false; // no increasing triplet
}

int main()
{
    vector<int>nums = {2,1,5,0,4,6}; // expected: true (1 < 4 < 6)

    cout << (increasingTriplet(nums) ? "true" : "false");
    return 0;
}