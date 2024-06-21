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
    void combination(vector<int> &arr, int target, int index, vector<vector<int>>&ans, vector<int> ds){
        if(index==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
                return ;
        }
        if(arr[index]<=target){
            ds.push_back(arr[index]);
            combination(arr,target-arr[index],index, ans, ds);
            ds.pop_back();
        }
        combination(arr, target, index+1, ans, ds);
    }
public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        combination(candidates,target,0, ans, ds);
        return ans;
    }
};

int main()
{
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;
    Solution s;
    vector<vector<int>> ans;
    ans = s.combinationSum(arr, target);
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