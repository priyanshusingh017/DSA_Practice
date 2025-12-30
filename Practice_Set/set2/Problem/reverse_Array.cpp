#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Method 1: Reverse array using two pointers (in-place)
void reverseArray(vector<int>& nums) {
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i < j) {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }
}

// Method 2: Reverse array using STL reverse function
void ReverseArray(vector<int>& nums) {
    reverse(nums.begin(), nums.end());
}

// Method 3: Print array in reverse order (does not modify original array)
void reversearray(const vector<int>& nums) {
    int n = nums.size();
    for (int i = n - 1; i >= 0; i--) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

// Method 4: Reverse array using stack
void Reversearray(vector<int>& nums) {
    stack<int> st;
    for (auto num : nums) {
        st.push(num);
    }
    for (int i = 0; i < nums.size(); i++) {
        nums[i] = st.top();
        st.pop();
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    // Reverse using two pointers
    reverseArray(nums);
    cout << "Reversed (two pointers): ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    // Reverse back using STL reverse
    ReverseArray(nums);
    cout << "Reversed (STL reverse): ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    // Print in reverse order (does not modify original)
    cout << "Print in reverse order: ";
    reversearray(nums);

    // Reverse using stack
    Reversearray(nums);
    cout << "Reversed (using stack): ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}