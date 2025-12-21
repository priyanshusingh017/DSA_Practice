#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int index1 = m - 1;    // Last element of nums1's valid data
    int index2 = n - 1;    // Last element of nums2
    int index = m + n - 1; // Last position of nums1

    // Merge from the end
    while (index1 >= 0 && index2 >= 0)
    {
        if (nums1[index1] > nums2[index2])
        {
            nums1[index--] = nums1[index1--];
        }
        else
        {
            nums1[index--] = nums2[index2--];
        }
    }

    // Copy remaining elements from nums1 (if any)
    while (index1 >= 0)
    {
        nums1[index--] = nums1[index1--];
    }

    // Copy remaining elements from nums2 (if any)
    while (index2 >= 0)
    {
        nums1[index--] = nums2[index2--];
    }
}

int main()
{
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3, n = 3;

    merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1)
        cout << num << " ";
    cout << endl;

    return 0;
}