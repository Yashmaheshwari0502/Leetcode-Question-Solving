#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
};

int main(){
    vector<int> nums = {1,2,3,1};
    Solution sol;
    cout<<sol.containsDuplicate(nums)<<endl;
    return 0;
}