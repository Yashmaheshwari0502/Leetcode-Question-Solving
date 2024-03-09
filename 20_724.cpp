// i saw the leetcode hint 3 because solved 1 and third test case but not 2 one 
// below is my solution
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        int n=right;
        int main=0;
        while (main<=right) {
            int leftsum = 0;
            int rightsum = 0;
            for (int i = 0; i <= main; i++) {
                leftsum += nums[i];
            }
            for (int i = right; i >= main; i--) {
                rightsum += nums[i];
            }
            if (leftsum == rightsum) {
                return main;
            }
                main++;
            
        }
        return -1;
    }
};

int main()
{
    vector<int> v = {2, 1, -1};
    Solution s;
    cout << s.pivotIndex(v) << endl;
    return 0;
}


// below is someone else i saw from solution but i am writing myself the seen code



/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightside= accumulate(nums.begin(),nums.end(),0);
        int leftside = 0;
        for(int i=0;i<nums.size();i++){
            rightside-=nums[i];
            if(rightside==leftside){
                return i;
            }
            leftside+=nums[i];
        }
        return -1;
    }
};
int main()
{
    vector<int> v = {2, 1, -1};
    Solution s;
    cout << s.pivotIndex(v) << endl;
    return 0;
}

*/