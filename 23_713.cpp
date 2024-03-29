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
using namespace std;

class Solution
{
public:
    int numSubarrayProductLessThanK(vector<int> nums, int k)
    {
        int i = 0, j = 0, product = 1;
        int count = 0;
        int n = nums.size();
        while (j < n)
        {
            product = product * nums[j];
            j++;
            while (product >= k && i < j)
            {
                product = product / nums[i];
                i++;
            }
            count = count + (j - i);
        }
        return count;
    }
};

int main()
{
    vector<int> nums = {10, 5, 2, 6};
    int k = 100;
    Solution s;
    cout << s.numSubarrayProductLessThanK(nums, k);
    return 0;
}