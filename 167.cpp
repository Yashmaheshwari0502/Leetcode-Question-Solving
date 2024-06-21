// i saw the answer which was very  stupid of me i am not studing anymore todays day was weak

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int start = 0;
        int end = numbers.size() - 1;
        int ans1 = 0;
        int ans2 = 0;

        while (start < end)
        {
            if (numbers[start] + numbers[end] == target)
            {
                ans1 = start + 1;
                ans2 = end + 1;
                break;
            }
            else if (numbers[start] + numbers[end] > target)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        return {ans1, ans2};
    }
};

int main()
{
    vector<int> v = {2, 3, 7};
    int target = 9;
    Solution s;
    vector<int> ans = s.twoSum(v, target);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}