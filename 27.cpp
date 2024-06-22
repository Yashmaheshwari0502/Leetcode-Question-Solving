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
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        vector<int>ans;
        int count=0;
        int i=0;
        while(i<n){
           
            if(nums[i]!=val){
                ans.push_back(nums[i]);
                count++;
            }
            i++;
        }
    nums=ans;
    return count;
    }
};

int main()
{
    vector<int>nums={3,2,2,3};
    int val=3;
    Solution s;
    int ans;
    ans=s.removeElement(nums,val);
    cout<<"The number of elements in nums which are not equal to val : "<<ans<<endl;;
    for(int it:nums){
        cout<<it<<" ";
    }
    return 0;
}