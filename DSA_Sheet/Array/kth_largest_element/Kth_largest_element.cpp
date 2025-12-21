#include <iostream>
#include<queue>
#include <vector>
using namespace std;

int KthLargest(vector<int> &arr , int k)
{

    // using min-heap
    priority_queue<int, vector<int>, greater<int>> minHeap;

    // store the elements in min-Heap
    for (auto num : arr)
    {
        minHeap.push(num);

        // remove the k-1 element from min-heap_top();

        if (minHeap.size() > k)
        {
            minHeap.pop();
        }
    }

    return minHeap.top();
}

int main()
{
    vector<int> arr = {2, 4, 1, 5, 6, 3};
    int k = 4;
    int result = KthLargest(arr, k);
    cout << "The " << k << "th largest element is: " << result << endl;
    return 0;
}