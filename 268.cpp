
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            
            if(nums[i]!=i){
                return i;
            }
        }
        return n;
    }
};

int main(){
    vector<int> nums={0,1};
    Solution sol;
    cout<<sol.missingNumber(nums)<<endl;
    return 0;
}



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// class Solution{
//     public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         int sum=0;
//         for(int i=0;i<n;i++){
            
//             sum+=nums[i];
//         }
//         return (n*(n+1)/2)-sum;
//     }
// };

// int main(){
//     vector<int> nums={0,1};
//     Solution sol;
//     cout<<sol.missingNumber(nums)<<endl;
//     return 0;
// }


// upper one is my solution and lower one is from copilot 
// both are correct but my solution is not optimized
// my solution is O(nlogn) and copilot solution is O(n) 
// so copilot solution is better than mine
