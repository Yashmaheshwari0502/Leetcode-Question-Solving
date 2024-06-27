// time complexity o(logn)
// space complexity o(1)

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
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = -1;
        int last = -1;

        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target)
            {
                if (nums[mid] == target)
                {
                    first = mid;
                }
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        if (first == -1)
        {
            return {-1, -1};
        }
        left = 0;
        right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target)
            {
                if (nums[mid] == target)
                {
                    last = mid;
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
            else
            {
                left = mid + 1;
            }
        }
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};

int main()
{

    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    Solution s;
    vector<int> ans;
    ans = s.searchRange(nums, target);
    for (int &it : ans)
    {
        cout << it << " ";
    }
    return 0;
}
