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

// time complexity -0(n)
// space complexity - 0(n)

class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans.push_back(nums[j]);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 1};
    Solution s;
    vector<int> ans;

    ans = s.getConcatenation(nums);
    for (auto it : ans)
    {
        cout << it << " ";
        it++;
    }

    return 0;
}