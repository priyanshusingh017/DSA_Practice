#include<bits/stdc++.h>
using namespace std;

// Function to merge overlapping intervals
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    
    // Sort intervals based on the starting value
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    // Initialize previous interval as the first one
    vector<int> prev = intervals[0];
    vector<vector<int>> merged;

    // Iterate through the rest of the intervals
    for (int i = 1; i < intervals.size(); i++) {
        vector<int> curr = intervals[i];
        // If current interval overlaps with previous, merge them
        if (curr[0] <= prev[1]) {
            prev[1] = max(prev[1], curr[1]);
        } else {
            // No overlap, add previous interval to result
            merged.push_back(prev);
            prev = curr;
        }
    }
    // Add the last interval
    merged.push_back(prev);
    return merged;
}

int main() {

    // input intervals
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};

    vector<vector<int>>merged = merge(intervals);

    // print merged intervals
    for(const auto& iv : merged){
        cout << "[" << iv[0] << "," << iv[1] << "] ";
    }
    cout << "\n";

    return 0;
}