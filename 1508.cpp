#include<iostream>
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


class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
       int l = 0;
        int r = 0;
        vector<int> ans;
        while (l < n) {
            int sum = 0;
            while (r < n) {
                sum += nums[r];
                r++;
                ans.push_back(sum);
            }
            l++;
            r = l;
        }
        sort(ans.begin(), ans.end());
       int res=accumulate(ans.begin()+left-1,ans.begin()+right,0LL)%1000000007;
	return res;
    }
};


int main()
{
    vector<int>nums={1,2,3,4};
    int n=4;
    int left=1;
    int right=5;
    Solution s ;
    cout<<s.rangeSum(nums,n,left,right);
    return 0;
}