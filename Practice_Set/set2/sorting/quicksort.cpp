#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums, int s, int e)
{

    int n = nums.size();

    int pivot = nums[s];

    int cnt = 0;
    for (int i = s + 1; i < n; i++)
    {
        if (nums[i] < pivot)
        {
            cnt++;
        }
    }

    int pivotindex = s + cnt;

    swap(nums[s], nums[pivotindex]);

    int i = s, j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (nums[i] < pivot)
        {
            i++;
        }
        while (nums[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(nums[i++], nums[j--]);
        }
    }
    return pivotindex;
}

void quicksort(vector<int> &nums, int s, int e)
{

    if (s >= e)
        return;

    int p = partition(nums, s, e);

    quicksort(nums, s, p - 1);

    quicksort(nums, p + 1, e);
}

int main()
{

    int n;
    cout << "enter the size" << endl;
    if (!(cin >> n))
        return 0;
    vector<int> arr(n);
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    if (n > 1)
        quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << (i + 1 < n ? ' ' : '\n');
    }
    return 0;

    return 0;
}