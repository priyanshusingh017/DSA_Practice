#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

    int maxcandies = 0;
    for(int candy : candies){
        maxcandies = max(maxcandies,candy);
    }
    vector<bool>res;
    for(int candy:candies){
        res.push_back(candy+extraCandies>=maxcandies);
    }

    return res;
}

int main(){

    vector<int>candies = {2,3,5,1,3};
    int extracandies = 3;

    vector<bool>res=kidsWithCandies(candies,extracandies);

    for(auto i : res){
        cout<<i<<" ";
    }
    return 0;
}