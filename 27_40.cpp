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
    void combination(vector<int> &arr, int index, int target, vector<vector<int>> &ans, vector<int> ds)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }
        for (int i = index; i < arr.size(); i++)
        {
            if (i > index && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            ds.push_back(arr[i]);
            combination(arr, i + 1, target - arr[i], ans, ds);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {

        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;

        combination(candidates, 0, target, ans, temp);
        return ans;
    }
};

int main()
{
    vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    Solution s;
    vector<vector<int>> ans;
    ans = s.combinationSum2(arr, target);
    for (const auto &comb : ans)
    {
        for (int num : comb)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
