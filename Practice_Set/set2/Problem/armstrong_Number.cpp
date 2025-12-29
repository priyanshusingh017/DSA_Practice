#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Check Armstrong number using string conversion and for-each loop
bool checkArmstrong(int n){
    string str = to_string(n); // Convert number to string
    int size = str.size();     // Get number of digits

    int sum = 0;
    // Calculate sum of digits raised to the power of number of digits
    for(auto c : str){
        sum = sum + (int)pow((c - '0'), size);
    }

    // Compare sum with original number
    if(n == sum){
        return true;
    }
    else{
        return false;
    }
}

// Check Armstrong number using while loop and integer operations
bool CheckArmstrong(int n){
    string str = to_string(n); // Convert number to string to get digit count
    int k = str.size();        // Number of digits

    int temp = n;
    int sum = 0;
    // Calculate sum of digits raised to the power of k
    while(temp){
        int digit = temp % 10;
        sum = sum + pow(digit, k);
        temp /= 10;
    }

    // Compare sum with original number
    if(sum == n){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check Armstrong number using both methods
    if (checkArmstrong(n)) {
        cout << n << " is an Armstrong number (method 1)." << endl;
    } else {
        cout << n << " is not an Armstrong number (method 1)." << endl;
    }

    if (CheckArmstrong(n)) {
        cout << n << " is an Armstrong number (method 2)." << endl;
    } else {
        cout << n << " is not an Armstrong number (method 2)." << endl;
    }

    return 0;
}