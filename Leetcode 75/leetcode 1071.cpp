#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string gcdOfStrings(string str1, string str2)
{
    if (str1 + str2 != str2 + str1)
    {
        return "";
    }
    int divisor = gcd(str1.size(), str2.size());
    /*
      example of str1 = "ABCABC" {len(str1)=6} , str2 = "ABC" {len(str2)=3}
      gcd (6,3)=common divisor is 3 .
      gcd(a,b)=gcd(b,a mod b) => until gcd(a,0)=a
    */
    return str1.substr(0, divisor);
}

int main()
{
    string str1 = "ABCABC";
    string str2 = "ABC";
    cout << gcdOfStrings(str1, str2) << endl;

    string str3 = "ababab";
    string str4 = "abab";
    cout << gcdOfStrings(str3, str4) << endl;

    string str5 = "leet";
    string str6 = "code";
    cout << gcdOfStrings(str5, str6) << endl;

    return 0;
}