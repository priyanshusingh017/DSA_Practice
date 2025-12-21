#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int maxprices = INT_MAX;
    int maxprofit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < maxprices)
        {
            maxprices = prices[i];
        }
        maxprofit = max(maxprofit, prices[i] - maxprices);
    }
    return maxprofit;
}

int main() {

    int n;
    if (!(cin >> n)) return 0;
    vector<int> prices(n);
    for (int i = 0; i < n; ++i) cin >> prices[i];
    cout << maxProfit(prices) << '\n';
    return 0;
}