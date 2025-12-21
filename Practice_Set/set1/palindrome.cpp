#include<bits/stdc++.h>
using namespace std;

// for character 
bool ispalindrome(string s){

    int n = s.size();
    int l=0 , r = n-1;

    while(l<r){
        if(s[l]!=s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

//  for numerical value 
bool ispalindromeNumber(int n){

    int num=n;
    int reverse = 0;
    while(num){
        int digit = num%10;
        reverse = reverse*10+digit;
        num/=10;
    }
    if(reverse==n){
        return true;
    }
    else{
        return false;
    }
}

int main() {

    cout << "Enter a string: ";
    string s;
    if (!getline(cin, s)) return 0;
    cout << boolalpha << ispalindrome(s) << '\n';

    cout << "Enter an integer: ";
    int n;
    if (!(cin >> n)) return 0;
    cout << boolalpha << ispalindromeNumber(n) << '\n';

    return 0;
}