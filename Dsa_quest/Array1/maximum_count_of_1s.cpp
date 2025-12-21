#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{

    int cnt = 0, maxcnt = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            cnt++;
            maxcnt = max(maxcnt, cnt);
        }
        else
        {
            cnt = 0;
        }
    }

    return maxcnt;
}

int main()
{

    vector<int> nums = {1,0,1,1,1,0,1};
    cout<<findMaxConsecutiveOnes(nums);

    return 0;
}