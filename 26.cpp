// Approach-1
// #include<iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <numeric>
// #include <stack>
// #include <map>
// #include <set>
// #include <unordered_map>
// #include <unordered_set>
// #include <climits>
// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int>ans;
//         int n=nums.size();
//         ans.push_back(nums[0]);
//         int count =1;
//         int i=1;
//         int value=nums[0];
//         while(i<n){
//             if(nums[i]!=value){
//                 ans.push_back(nums[i]);
//                 value=nums[i];
//                 count++;
//             }
//             i++;
//         }
//         nums=ans;
//         return count;
//     }
// };


// int main()
// {
//     vector<int>nums={3,2,2,3};
//     int val=3;
//     Solution s;
//     int ans;
//     ans=s.removeDuplicates(nums);
//     cout<<"The number of elements in nums which are not equal to val : "<<ans<<endl;;
//     for(int it:nums){
//         cout<<it<<" ";
//     }
//     return 0;
// }

// **************************************************************
// Approach-2

// #include<iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <queue>
// #include <numeric>
// #include <stack>
// #include <map>
// #include <set>
// #include <unordered_map>
// #include <unordered_set>
// #include <climits>
// using namespace std;

// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int n=nums.size();
//         int i=0;
//         for(int j=1;j<n;j++){
//             if(nums[i]!=nums[j]){
//                 nums[i+1]=nums[j];
//                 i++;
//             }
//         }
//         return i+1;
//     }
// };


// int main()
// {
//     vector<int>nums={3,2,2,3};
//     int val=3;
//     Solution s;
//     int ans;
//     ans=s.removeDuplicates(nums);
//     cout<<"The number of elements in nums which are not equal to val : "<<ans<<endl;;
//     for(int it:nums){
//         cout<<it<<" ";
//     }
//     return 0;
// }



// **********************************************************
// Approach-3


// time complexity-o(N)
// space complexity-o(1)

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
    int removeDuplicates(vector<int>& nums) {
        int l=0;
        int r=0;
       
        int count=1;
        while(r<nums.size()){
            if(nums[r]==nums[l]){
                r++;
            }
            else{
                l++;
                nums[l]=nums[r];
                count++;
               
            }
        }
   
        return count;
    }
};

int main()
{
    vector<int>nums={1,1,1,2,2,3,4,5,6};
    
    Solution s;
    int ans;
    ans=s.removeDuplicates(nums);
    cout<<"The number of elements in nums which are not equal to val : "<<ans<<endl;;
    for(int it:nums){
        cout<<it<<" ";
    }
    return 0;
}