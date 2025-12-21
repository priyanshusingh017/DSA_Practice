#include <iostream>
#include <vector>
using namespace std;

/*
 Kadane's Algorithm is an efficient method to find the maximum sum of a contiguous subarray 
 within a one-dimensional array of numbers. 

 It works by iterating through the array and, at each position, 
 keeping track of the maximum subarray sum ending at that position. 

 If the running sum becomes negative, it is reset to zero, as any subarray 
 starting before this point would not contribute to a larger sum. 
 
 The algorithm runs in linear time O(n), making it optimal for this problem.
*/


int maxSubarraySum(vector<int> &arr)
{

    int currsum = 0;
    int maxsum = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {

        currsum += arr[i];
        maxsum = max(maxsum, currsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }

    return maxsum;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int result = maxSubarraySum(arr);
    cout << "Maximum subarray sum is: " << result << endl;
    return 0;
}