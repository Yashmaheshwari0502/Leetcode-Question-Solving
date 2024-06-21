
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int start = 0;
        int end = height.size() - 1;
        int mostmax = -1;
        while (start < end)
        {
            int maxi = min(height[start], height[end]) * (end - start);
            if (maxi > mostmax)
            {
                mostmax = maxi;
            }
            if (start < end)
            {
                start++;
            }
            else
            {
                end--;
            }
        }
        return mostmax;
    }
};

int main()
{
    vector<int> height = {2,3,4,5,18,17,6};
    Solution s;
    cout << s.maxArea(height) << endl;
    return 0;
}


// though by myself
