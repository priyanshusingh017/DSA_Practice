#include<bits/stdc++.h>
using namespace std;

// Returns the maximum product of a subarray in arr.
// Uses dynamic programming: at each position we track the maximum
// and minimum products ending at that position (currprod and minprod).
// The minimum is needed because a negative number can turn a small
// negative product into a large positive product.
// Time: O(n), Space: O(1)
int maxProduct(vector<int> &arr) {
    
    int n = arr.size();
    // minprod: minimum product ending at previous position
    // currprod: maximum product ending at previous position
    // maxprod: global maximum product found so far
    int minprod = arr[0];
    int maxprod = arr[0];
    int currprod = arr[0];

    for(int i = 1; i < n; i++){
        // If current element is negative, swapping current max and min
        // ensures multiplication flips signs correctly.
        if(arr[i] < 0){
            swap(minprod, currprod);
        }

        // Update current max and min ending at i
        currprod = max(arr[i], currprod * arr[i]);
        minprod  = min(arr[i], minprod  * arr[i]);

        // Update global maximum
        maxprod  = max(currprod, maxprod);
    }

    return maxprod;
}

int main(){

    vector<int>nums = {-2, 6, -3, -10, 0, 2};

    cout<<maxProduct(nums)<<endl;


    return 0;
}