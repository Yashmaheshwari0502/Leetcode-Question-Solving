#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> ans;
        ans = nums;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            ans[i] = ans[i] * nums[i];
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    vector<int> v = {-4, -1, 0, 3, 10};
    Solution s;
    vector<int> ans = s.sortedSquares(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}



// time complexity nlogn 
// not good need to be fixed
// now working on optimized solution


