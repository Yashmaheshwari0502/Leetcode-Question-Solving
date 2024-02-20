// Approach-1: Brute Force
// Complexity: O(n^2)
// Author: yashmaheshwari

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         int a;
//         int b;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i!=j){
//                     if(nums[i]+nums[j]==target){
//                         a=i;
//                         b=j;
//                         return {a,b};
//                     }
//                 }
//             }
//         }
//         return {};
//     }
// };

// int main(){
//     vector<int> nums={2,7,11,15};
//     int target=9;
//     Solution sol;
//     vector<int> result=sol.twoSum(nums,target);
//     for(int i=0;i<result.size();i++){
//         cout<<result[i]<<" ";
//     }
//     return 0;
// }

// Approach-2: hash map
// Complexity: O(n)
// Author: yashmaheshwari

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int value = 0;
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            value = target - nums[i];
            if (m.count(value))
            {
                return {m[value], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    vector<int> nums = {3, 2, 4};
    int target = 6;
    Solution sol;
    vector<int> result = sol.twoSum(nums, target);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
