#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <numeric>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <climits>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> np;
        for (int it : nums)
        {
            np[it]++;
        }
        for (auto it : np)
        {
            if (it.second > nums.size() / 2){
                return it.first;
            }
            
        }
        return 0;
    }
};

int main()
{
    vector<int> nums = {3,8,3};
    Solution s;
    int ans= s.majorityElement(nums);
    cout << ans;
    return 0;
}