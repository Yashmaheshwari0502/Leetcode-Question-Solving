// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n=nums.size();
//         for(int i=0;i<n-1;i++){
//             if(nums[i]==nums[i+1]){
//                 return true;
//             }
//         }
//         return false;
//     }
// };

// int main(){
//     vector<int> nums = {1,2,3,1};
//     Solution sol;
//     cout<<sol.containsDuplicate(nums)<<endl;
//     return 0;
// }


// time comlplexity:- 0(N)
// space complexity:-0(1)




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
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto it:mp){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};



int main()
{
    vector<int> nums = {1,2,3,1};
    Solution sol;
    cout<<boolalpha<<sol.containsDuplicate(nums)<<endl;
   
    return 0;
}


