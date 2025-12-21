#include<iostream>
#include<vector>
using namespace std;

/*
  Given an array containing both positive and negative numbers in random order. 
  The task is to rearrange the array elements so that all negative numbers appear before all positive numbers.
 Note:
 Given array does not contain any zeroes.
 Order of resultant array does not matter.
*/

void moveNegativeElement(vector<int>&nums){

    int l = 0 , r=nums.size()-1;

    while(l<r){

        while(l<r && nums[l]<0){
            l++;
        }

        while(l<r && nums[r]>0){
            r--;
        }

        if(l<r){
            swap(nums[l] , nums[r]);
            l++;
            r--;
        }
    }
}

int main(){
    vector<int> nums = {1, -2, 3, -4, 5, -6, 7, -8};
    moveNegativeElement(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}