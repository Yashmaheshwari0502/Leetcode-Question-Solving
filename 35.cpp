#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        return start;
    }
};

int main()
{
    vector<int> nums = {1,3,5,6};
    int target = 2;
    Solution s;
    cout << s.searchInsert(nums, target) << endl;
}

// whole solved by me and only me no one gets the fucking credit in it 
// time complexity is taking tooo much but dont you worry daddy home