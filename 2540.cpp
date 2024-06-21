// the code was thought by me and i didnt looked the topics and i am proud of it 
// time complexity- o(n)
// space complexity- o(m)


#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    int getCommon(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> m;
        int n1 = nums1.size();
        int n2 = nums2.size();
        for (int i = 0; i < n1; i++)
        {
            m[nums1[i]]++;
        }
        for (int i = 0; i < n2; i++)
        {
            if (m.count(nums2[i]))
            {
                return nums2[i];
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> num1 = {1, 6, 7};
    vector<int> num2 = {1, 4};

    Solution s;
    cout << s.getCommon(num1, num2) << endl;
    return 0;
}



