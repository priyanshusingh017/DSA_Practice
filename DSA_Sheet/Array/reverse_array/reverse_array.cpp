#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr) {
        
    int n = arr.size();
        
    int l =0 , r = n-1;
        
    while(l<=r){
            
        swap(arr[l] , arr[r]);
        l++;
        r--;
    }
        
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};

    reverseArray(arr);

    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}