#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int max_all=0;
        int max = -1;
        unordered_map<int, int> v;
        for (int i = 0; i < nums.size(); i++) {
            v[nums[i]]++;
            
        }
        for(auto it:v){
            if(it.second>max){
                max=it.second;
            }
        }
        for(auto it:v){
            if(it.second==max){
                max_all+=max;
            }
        }
        return max_all;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution s;
    cout << s.maxFrequencyElements(nums) << endl;
    return 0;
}


// completed by me not looked anything