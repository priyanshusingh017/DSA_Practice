#include<bits/stdc++.h>
using namespace std;

void multipy(vector<int>& result , int x){

    int carry =0;
    for(int i=0; i<result.size(); i++){
        
        int product = result[i]*x+carry;
        result[i]=product%10;
        carry = product/10;
    }

    while(carry>0){
        result.push_back(carry%10);
        carry = carry/10;
    }
}

vector<int> factorial(int n){

    vector<int>result;
    result.push_back(1);

    for(int i=2; i<=n; i++){
        multipy(result,i);
    }

    reverse(result.begin(),result.end());

    return result;
}

int main() {

    int n;
    if (!(cin >> n)) return 0;

    vector<int> ans = factorial(n);
    for (int d : ans) cout << d;
    cout << '\n';
    return 0;
}