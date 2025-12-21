#include<iostream>
#include <vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {

    int s = nums.size();
    vector<int>x(s/2);
    vector<int>y(s/2);

    for(int i =0; i<s/2; i++){
        x[i]=nums[i];
    }
    int j=0;
    for(int i=s/2; i<s; i++){
        y[j]=nums[i];
        j++;
    }

    vector<int>ans(s);
    int j1 = 0 , k = 0;
    for(int i=0; i<s; i=i+2){
        ans[i]=x[j1];
        j1++;
    }
    for(int i=1; i<s; i=i+2){
        ans[i]=y[k];
        k++;
    }

    return ans;

}

// optimal suggestions 

vector<int>shuffle1(vector<int>nums , int n){

    vector<int>ans(2*n);

    for(int i=0; i<n; i++){
        ans[2*i]=nums[i]; // x_i
        ans[2*i+1]=nums[i+n]; // y_i
    }

    return ans ;
}

int main(){

    vector<int>nums = {2,5,1,3,4,7};
    int n = 3;

    vector<int>ans=shuffle1(nums,n);
    for(auto k:ans){
        cout<<k<<" ";
    }

    return 0;
}