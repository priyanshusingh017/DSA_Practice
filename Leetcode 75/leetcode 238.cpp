#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    /*
     Division-based idea (kept for contrast) fails with zeros and is often disallowed:
     int product = 1;
     for (auto x : nums) product *= x;
     for (int i = 0; i < nums.size(); i++) ans.push_back(product / nums[i]);
    */

    // Two-pass prefix/suffix (no division). Handles zeros.
    
    int prefix = 1; // ans[i] = product of elements left of i
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] = prefix;
        prefix *= nums[i];
    }

    int suffix = 1; // multiply by product of elements right of i
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    return ans;
}

int main()
{
    // Expected for {1,2,3,4}: 24 12 8 6
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);
    for (auto x : ans)
        cout << x << ' ';
    return 0;
}