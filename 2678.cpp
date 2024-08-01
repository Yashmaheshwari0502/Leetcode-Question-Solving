// Time complexity : O(n)
// Space complexity : O(1)

#include <iostream>
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

class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        int count = 0;
        for (const auto &detail : details)
        {
            if (detail.size() > 12)
            {
                int tenth = detail[11] - '0';
                int ones = detail[12] - '0';
                int value = tenth * 10 + ones;
                if (value > 60)
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main()
{
    vector<string> details = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    Solution s;

    cout << s.countSeniors(details);
    return 0;
}