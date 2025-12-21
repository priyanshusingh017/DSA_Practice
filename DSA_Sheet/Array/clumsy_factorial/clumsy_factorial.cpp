#include <bits/stdc++.h>
using namespace std;

int clumsy(int n)
{
    vector<char> op = {'*', '/', '+', '-'};
    int n1 = 0;
    int res = 0;
    for (int i = n; i > 0; i--){
        if(n1<3) n1 = 0;
        int res = i*op[n1];
    }

    return res;
}

int main()
{
    int n;
    cin>>n;

    cout<<clumsy(n);

    return 0;
}