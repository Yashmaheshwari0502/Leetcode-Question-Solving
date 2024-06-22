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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                ans.push_back(nums1[i]);
                i++;
            }
            if (nums2[j] < nums1[i]) {
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while (i < m) {
            ans.push_back(nums1[i]);
            i++;
        }
        while (j < n) {
            ans.push_back(nums2[j]);
            j++;
        }
        nums1 = ans;
    }
};

int main()
{
    vector<int>nums1={1,2,3,0,0,0};
    vector<int>nums2={2,5,6};
    int m=3;
    int n=3;
    vector<int>ans(m);
    Solution s;
    s.merge(nums1,m,nums2,n);
    for(auto it:nums1){
        cout<<it<<" ";
    }
    return 0;
}