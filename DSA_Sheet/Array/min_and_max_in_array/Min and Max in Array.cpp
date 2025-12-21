#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
 Input: arr[] = [1, 4, 3, -5, -4, 8, 6]
 Output: [-5, 8]
 Explanation: minimum and maximum elements of array are -5 and 8.
*/

vector<int> getMinMax(const vector<int> &arr) {
    int mx = INT_MIN;
    int mn = INT_MAX;

    for (int num : arr) {
        if (num > mx) mx = num;
        if (num < mn) mn = num;
    }

    return {mn, mx};
}

int main() {
    vector<int> arr = {1, 4, 3, -5, -4, 8, 6};
    vector<int> res = getMinMax(arr);
    cout << "[" << res[0] << ", " << res[1] << "]" << endl;
    return 0;
}