#include <bits/stdc++.h>
using namespace std;

// Function to merge overlapping intervals
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    // Sort intervals based on the starting time
    sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
         { return a[0] < b[0]; });

    vector<vector<int>> merged;
    vector<int> prev = intervals[0]; // Initialize with the first interval

    // Iterate through the intervals and merge if overlapping
    for (int i = 1; i < intervals.size(); i++)
    {
        vector<int> curr = intervals[i];
        if (curr[0] <= prev[1])
        {
            // Overlapping intervals, merge them
            prev[1] = max(prev[1], curr[1]);
        }
        else
        {
            // No overlap, add the previous interval to result
            merged.push_back(prev);
            prev = curr;
        }
    }
    // Add the last interval
    merged.push_back(prev);
    return merged;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> result = merge(intervals);

    for (const auto &interval : result)
    {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}