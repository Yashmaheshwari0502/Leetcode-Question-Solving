#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        int countMax = 0;
        unordered_map<int, int> v;
        int big = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            v[nums[i]]++;
        }
        for (auto it : v)
        {
            if (it.second > big)
            {
                big = it.second;
            }
        }
        for (auto it : v)
        {
            if (it.second == big)
            {
                countMax += big;
            }
        }
        return countMax;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution s;
    cout << s.maxFrequencyElements(nums) << endl;
    return 0;
}