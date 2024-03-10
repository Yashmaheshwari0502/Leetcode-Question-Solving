// i saw my old code
// was not able to solve my self;

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans1;
        vector<int> ans2;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0, j = 0;
        while (i < n1 && j < n2)
        {
            if (nums1[i] == nums2[j])
            {
                ans1.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        for (int b = 0; b < ans1.size(); b++)
        {
            if (b > 0 && ans1[b] == ans1[b - 1])
            {
                continue;
            }
            ans2.push_back(ans1[b]);
        }
        return ans2;
    }
};

int main()
{
    vector<int> nums1 = {1};
    vector<int> nums2 = {1};
    Solution s;
    vector<int> ans = s.intersection(nums1, nums2);
    cout << "[";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "]";
    return 0;
}