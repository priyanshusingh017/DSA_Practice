#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool increasingTriplet(vector<int> &nums)
{
    int first = INT_MAX;
    int second = INT_MAX;
    for (int n : nums)
    {
        if (n <= first)
        {
            first = n; // update the first element
        }
        else if (n <= second)
        {
            second = n; // update the second element
        }
        else
        {
            return true; // means the third element is greater
        }
    }
    return false; // no triplet found ;
}

int main()
{
    vector<int>nums = {2,1,5,0,4,6};

    cout << (increasingTriplet(nums) ? "true" : "false");
    return 0;
}