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
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int low1 = 0;
        int low2 = 0;
        int high1 = nums1.size();
        int high2 = nums2.size();
        vector<int> ans;

        while (low1 < high1 && low2 < high2)
        {
            if (nums1[low1] == nums2[low2])
            {
                ans.push_back(nums1[low1]);
                low1++;
                low2++;
            }
            else if (nums1[low1] < nums2[low2])
            {
                low1++;
            }
            else
            {
                low2++;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> num1 = {1, 2, 2, 1};
    vector<int> num2 = {2, 2};
    vector<int>ans;
    Solution s;
    ans=s.intersect(num1, num2);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}