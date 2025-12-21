#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int kthSmallest(vector<int> &arr, int k) {
    // Input validation
    if (k <= 0 || k > arr.size()) {
        return -1; // Invalid k
    }

    // Using max-heap to keep track of k smallest elements
    priority_queue<int> pq;

    // Push the first k elements into the max-heap
    for(int i = 0; i < k; i++){
        pq.push(arr[i]);
    }

    // For remaining elements, if current element is smaller than heap top,
    // remove the largest and insert current element
    for(int i = k; i < arr.size(); i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    
    // The top of heap is the kth smallest element
    return pq.top();
}

// alternative way -

int kthSmallest1(vector<int> &arr, int k) {

    // sort the array
    for(int i=0; i<arr.size(); i++){
        int minindex = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[i] , arr[minindex]);
    }

    return arr[k-1];
}


int main(){
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 4;
    int result = kthSmallest1(arr, k);
    
    if (result != -1) {
        cout << "The " << k << "th smallest element is: " << result << endl;
    } else {
        cout << "Invalid k value!" << endl;
    }
    
    return 0;
}