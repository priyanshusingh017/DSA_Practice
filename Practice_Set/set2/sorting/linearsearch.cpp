#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int linearsearch( int *arr, int n, int target){
    for(int i = 0; i < n; ++i){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout <<"enter the size "<<endl;
    cin >> n;
    cout<<"enter the elements "<<endl;
    int *arr = new int[n];
    for(int i = 0; i < n; ++i) cin >> arr[i];
    cout<<"enter the target"<<endl;
    int target;
    cin >> target;
    cout << linearsearch(arr, n, target) << endl;
    
    delete[] arr;
    return 0;
}