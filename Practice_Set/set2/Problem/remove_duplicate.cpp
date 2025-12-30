#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Removes duplicates using a visited array (works for numbers in a known range)
vector<int> removeDuplicatesVisited(vector<int> nums) {
    vector<int> result;
    vector<bool> visited(1001, false); // Assumes numbers are in range [0, 1000]
    
    for (int num : nums) {
        if (!visited[num]) { // If not visited, add to result
            result.push_back(num);
            visited[num] = true;
        }
    }
    
    return result;
}

// Removes duplicates using an unordered_set (works for any integers)
vector<int> removeDuplicatesSet(vector<int> nums) {
    unordered_set<int> seen;
    vector<int> result;
    
    for (int num : nums) {
        if (seen.find(num) == seen.end()) { // If not seen, add to result
            result.push_back(num);
            seen.insert(num);
        }
    }
    
    return result;
}

int main(){
    // Example input vector with duplicates
    vector<int> nums = {1, 2, 2, 3, 4, 4, 5, 1000, 1000};

    // Remove duplicates using visited array
    vector<int> noDupVisited = removeDuplicatesVisited(nums);
    cout << "After removeDuplicatesVisited: ";
    for (int num : noDupVisited) {
        cout << num << " ";
    }
    cout << endl;

    // Remove duplicates using unordered_set
    vector<int> noDupSet = removeDuplicatesSet(nums);
    cout << "After removeDuplicatesSet: ";
    for (int num : noDupSet) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}