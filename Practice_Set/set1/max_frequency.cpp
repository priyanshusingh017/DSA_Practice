#include<bits/stdc++.h>
using namespace std;

int maxfreq(vector<int>&nums){

    if(nums.empty()) return 0;
    unordered_map<int,int>freq;
    for(auto c : nums){
        freq[c]++;
    }

    int maxfreq=-1;
    for(auto i:freq){
        if(i.second>maxfreq){
            maxfreq=i.second;
        }
    }

    return maxfreq;
}

int main(){

    vector<int>nums={1,2,2,3,4,3,3,2,2};

    cout<<maxfreq(nums)<<endl;

    return 0;
}